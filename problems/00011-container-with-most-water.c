//time limit exceeded
int maxArea(int* height, int heightSize) {
    int maxheight=0;
    int* maxhtp = NULL;
    int* temp = height;
    int* temp2 = height;
    int maxwater = 0;
    int* maxwaterp = NULL;
    for (temp; temp<height+heightSize; temp++)  //address overflow while doing temp<temp+heightSize
    {
        for (temp2=temp; temp2<height+heightSize; temp++)
        {
            int volume = 0;
            if (temp<temp2)
            {
                volume = (temp2-temp)*(*temp);
            }
            else if (temp2<temp)
            {
                volume = (temp-temp2)*(*temp2);
            }
            if (volume>maxwater)
            {
                maxwater = volume;
            }
        }
    }
    return maxwater;
}