#include <stdio.h>
#include <limits.h>
//need to include leading whitespaces otherwise code doesn't run
int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    int num = 0;

    while (s[i]==' ') i++;

    if (s[i] == '+')
    {
        sign =1;
        i++;
    }
    else if (s[i]=='-')
    {
        sign=-1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        if (num > (INT_MAX - digit) / 10) //easier to check num with int_max since both would be positive values, regardless of sign
        {
            if (sign==1)
                return INT_MAX;
            else if (sign==-1)
                return INT_MIN;
        }

        num = num * 10 + digit;
        i++;
    }

    return (num * sign);
}
