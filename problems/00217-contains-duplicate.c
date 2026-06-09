bool containsDuplicate(int* nums, int numsSize) {
 for (int i=0; i<numsSize; i++)
 {
    for (int j=i+1; j<numsSize; j++)
    {
        //printf("%d i\n", nums[i]);
        //printf("%d j\n", nums[j]);
        if (nums[i]==nums[j])
        {
            return true;
        }
    }
 }   
 return false;
}