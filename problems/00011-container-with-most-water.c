//use two pointers but not brute force to pass time
int maxArea(int* height, int heightSize) {
    int* left = height;
    int* right = height+(heightSize-1); //beginning of last integer; else out of bounds
    int maxvolume= 0;
    while (left<right)
    {
        int width = right -left;
        if (*right>*left)
        {
            int volume = (*left)*width;
            if (volume>maxvolume)
            {
                maxvolume = volume;
            }
            left++;
        }
        else if (*left>*right)
        {
            int volume = (*right)*width;
            if (volume>maxvolume)
            {
                maxvolume = volume;
            }
            right--;
        }
        else
        {
            int volume = (*left)*width;
            if (volume>maxvolume)
            {
                maxvolume = volume;
            }
            right--;
        }
        
    }
    return maxvolume;
}