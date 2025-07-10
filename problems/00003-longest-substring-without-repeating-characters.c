struct Count {
    char alphabet[128];
    int count[128];
};

int lengthOfLongestSubstring(char* s) {
    struct Count c;
    int maxval = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        for (int k = 0; k < 128; k++) {
            c.alphabet[k] = (char)(k);  
            c.count[k] = 0;
        }
        int cn = 0; 
        for (int j = i; s[j] != '\0'; j++) {
            int repeated=0;
            for (int k = 0; k < 127; k++) {
                if (s[j] == c.alphabet[k])
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
