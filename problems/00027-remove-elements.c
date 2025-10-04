int removeElement(int* nums, int numsSize, int val) {
    if (numsSize==0)
    {
        return 0;
    }
    int k=0;
    int ucurr=0;
    for (int i=0; i<numsSize; i++)
    {
        if (nums[i]!=val)
        {
            k++;
            nums[ucurr++]=nums[i];
        }
        else
        {
            nums[i]='\0';
        }
    }
    return k;
}