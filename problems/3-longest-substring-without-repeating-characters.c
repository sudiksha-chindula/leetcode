#include <stdio.h>
#include <string.h>

struct Count {
    char alphabet[63];
    int count[63];
};

int lengthOfLongestSubstring(char* s) {
    struct Count c;
    int maxval = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        for (int k = 0; k < 62; k++) {
            c.alphabet[k] = (char)(65 + k);  
            c.count[k] = 0;
        }
        c.alphabet[61] = ' ';   //testcase for ' '
        c.count[61] = 0;
        c.alphabet[62]='!';     //testcase for !
        c.count[62]=0;

        int cn = 0; 
        for (int j = i; s[j] != '\0'; j++) {
            int repeated=0;
            for (int k = 0; k < 62; k++) {
                if (s[j] == c.alphabet[k] || s[j] == (c.alphabet[k]) - 32)
                {
                    if (c.count[k] == 0) 
                    {
                        c.count[k]=1;
                        cn++;
                    } 
                    else 
                    {
                        repeated=1;
                    }
                    break;
                }
            }
            if (repeated)
                break;
        }
        if (cn > maxval)
            maxval=cn;
    }
    return maxval;
}
