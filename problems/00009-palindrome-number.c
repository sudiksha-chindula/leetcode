#include <limits.h>
bool isPalindrome(int x) {
    int reverse=0;
    int temp=x;
    if (x<0)
    {
        return false;
    }
    while(temp>0)
    {
        int digit = temp%10;
        if (reverse>INT_MAX/10)    //overflow testcase and overflow must be checked for reversed number not existing number for edge cases like 1000000001 etc
        {
            return false;
        }
        reverse*=10;
        reverse+=digit;
        temp/=10;
    }
    if (x==reverse)
    {
        return true;    //True isn't boolean in C
    }
    else
    {
        return false;
    }
}