//passed 73/106 testcases
#include <stdio.h>
#include <stdlib.h>
struct dtos
{
    int diff;
    int sum;
};
int threeSumClosest(int* nums, int numsSize, int target) {
    struct dtos* arr1 = malloc(INT_MAX*sizeof(struct dtos)); //struct pointer to array of structures
    int c=0;    //current filled index
    for (int i=0; i<numsSize-2; i++)
    {
        for (int j=i+1; j<numsSize-1; j++)
        {
            for (int k=j+1; k<numsSize; k++)
            {
                int sum = nums[i]+nums[j]+nums[k];
                int diff = abs(sum - target);

                arr1[c].diff=diff;
                arr1[c++].sum=sum;
            }
        }
    }
    int min = arr1[0].diff;
    int minindex=0;
    for (int x=1; x<c; x++)
    {
        if (arr1[x].diff<min)
        {
            min=arr1[x].diff;
            minindex = x;
        }
    }
    return arr1[minindex].sum;
}