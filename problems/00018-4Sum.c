//does not pass uniqueness
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    int capacity = 1000;
    int** list = malloc(capacity * sizeof(int*));
    *returnColumnSizes = malloc(capacity * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize - 3; i++) 
    {
        for (int j = i + 1; j < numsSize - 2; j++) 
        {
            for (int k = j + 1; k < numsSize - 1; k++) 
            {
                for (int l = k + 1; l < numsSize; l++) 
                {
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target)  
                    {
                        int* set = malloc(4 * sizeof(int)); //allocating on heap
                        set[0] = nums[i];
                        set[1] = nums[j];
                        set[2] = nums[k];
                        set[3] = nums[l];
                        int cn=0;
                        list[*returnSize] = set;
                        (*returnColumnSizes)[*returnSize] = 4;
                        (*returnSize)++;    //returnColumnSizes is needed explicitly for caller function to know the size of the return set in C

                    }
                }
            }
        }
    }

    return list;
}


