/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* product = calloc(numsSize, sizeof(int));

    int left_running_product=1;
    for (int i=0; i<numsSize; i++)
    {
       product[i]=left_running_product;
       left_running_product*=nums[i];
    }
    int right_running_product=1;
    for (int j=numsSize-1; j>=0; j--)
    {   
        product[j]*=right_running_product;
        right_running_product*=nums[j];
    }
    return product;
}