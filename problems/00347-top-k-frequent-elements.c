int compareInts(const void *a, const void *b)
{
    int val1 = *(int*)a;
    int val2 = *(int*)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compareInts);
    *returnSize = k;
    
    int* frequency = calloc(numsSize, sizeof(int));     
    int* maxarray = calloc(k, sizeof(int));      
    int count = 1;

    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] == nums[i-1]) 
        {
            count++;
        } else 
        {
            frequency[i-1] = count; 
            count = 1; 
        }        
    }
    frequency[numsSize - 1] = count;
    
    for (int m = 0; m < k; m++) 
    {
        int max_val = 0;
        int max_index = 0;
        
        for (int i = 0; i < numsSize; i++) 
        {
            if (frequency[i] > max_val) 
            {
                max_val = frequency[i];
                max_index = i;
            }
        }
        
        maxarray[m] = nums[max_index];
        frequency[max_index] = 0; 
    }

    free(frequency);

    return maxarray;
}