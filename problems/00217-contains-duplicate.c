//tried resolving TLE with bubble sort
//bubble sort also takes O(n^2) (outer loop + pushing loop)
//merge-sort and hash-sets too heavy for this code
//require comparator function for qsort

int compareInts(const void *a, const void *b)
{
if    //dereference/cast pointers to integer values
    int val1 = *(int*)a;
    int val2 = *(int*)b;
    //relation - val1 before val2, val2 after val1, equality
    if (val1<val2) return -1;
    if (val1>val2) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) {
 
    qsort(nums, numsSize, sizeof(int), compareInts); //4 arguments

    for (int j=1; j<numsSize; j++)
    {
        if (nums[j]==nums[j-1])
        {
            //printf("%d, %d", nums[j-1], nums[j]);
            while(nums[j]!=nums[j-1])
            {
                j++;
            }
            return true;
        }
    }
    return false;

 }   