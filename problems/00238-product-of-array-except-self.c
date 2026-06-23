/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* left_product = calloc(numsSize, sizeof(int));
    int* right_product = calloc(numsSize, sizeof(int));
    int* product = calloc(numsSize, sizeof(int));

    for (int i=0; i<numsSize; i++)
    {
        int ri = numsSize-1-i;
        //printf("%d", i);
        if (i==0)
        {
            left_product[i+1]=nums[i];
            right_product[ri-1]=nums[ri];
            left_product[i]=1;
            right_product[ri]=1;
        }
        else if (i!=numsSize-1)
        {
            left_product[i+1]=left_product[i]*nums[i];
            right_product[ri-1]=right_product[ri]*nums[ri];
            //product[i+1]=product[i];
            //printf("%d\n", product[i]);
        }
        
    }
    for (int i=0; i<numsSize; i++)
    {
        product[i]=left_product[i]*right_product[i];
        printf("%d", product[i]);
    }
    return product;
}