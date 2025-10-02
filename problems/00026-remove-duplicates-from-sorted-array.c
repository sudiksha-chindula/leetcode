int removeDuplicates(int* nums, int numsSize) {
    int ucurr=1;
    int k=1;
    for (int i=1; i<numsSize; i++)
    {
        if (nums[i]!=nums[i-1])
        {
            nums[ucurr++]=nums[i];
            k++;
        }
    }

    return k;
}