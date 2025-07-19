#include <stdio.h>

int threeSumClosest(int* nums, int numsSize, int target) {
    int* diffarray = malloc(100*sizeof(int)); //since zero would represent the closest, can't initialise
    int c=0;    //current filled index
    for (int i=0; i<numsSize-2; i++)
    {
        for (int j=i+1; j<numsSize-1; j++)
        {
            for (int k=j+1; k<numsSize; k++)
            {
                int sum = nums[i]+nums[j]+nums[k];
                int diff = sum-target;
                if (sum>0)
                {
                    int diff = sum-target;
                }
                else
                {
                    int diff = (-sum)-target;
                }
                if (diff<0)
                {
                    diff = 0-diff;
                }
                printf("%d", diff);
                diffarray[c++]=diff;
            }
        }
    }
    int min = diffarray[0];
    for (int x=1; x<c; x++)
    {
        if (diffarray[x]<min)
        {
            min=diffarray[x];
        }
    }
    return min;
}