double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums3Size = nums1Size+nums2Size;
    int nums3[nums3Size];
    int i=0;
    int j=0;
    int current=0;
    double median;
    while(i<nums1Size && j<nums2Size)
    {
        if (nums1[i]<nums2[j])
        {
            nums3[current]=nums1[i];
            current++;
            i++;
        }
        else
        {
            nums3[current]=nums2[j];
            current++;
            j++;
        }
    }
    while(i<nums1Size)
    {
        nums3[current]=nums1[i];
        current++;
        i++;
    }
    while(j<nums2Size)
    {
        nums3[current]=nums2[j];
        current++;
        j++;
    }
    if (current%2==0)   //even --- ceil index-1
    {
        median = (nums3[current/2]+nums3[(current/2) - 1])/2.0;     //add double addition
    }
    else        //odd --- ceil index
        median = nums3[current/2];  //ceil value works
    return median;
}