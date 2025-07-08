#include <limits.h>
int reverse(int x) {

    int temp = x;
    int reverse=0;
    while(temp!=0)
    {
        int digit = temp%10;
        temp/=10;
        if (reverse>INT_MAX/10 || reverse < INT_MIN/10)     //check for overflow, upper and lower bounds, reverse*10 doesn't work since can't be represented in int
        {
            return 0;
        }
        reverse*=10;
        reverse+=digit;
    }
    return reverse;
}
