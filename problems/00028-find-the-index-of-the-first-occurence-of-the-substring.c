int strStr(char* haystack, char* needle) {
    int needlesize = 0;
    int haystacksize = 0;

    for (int i = 0; needle[i] != '\0'; i++) {
        needlesize++;
    }

    for (int j = 0; haystack[j] != '\0'; j++) {
        haystacksize++;
    }

    if (needlesize == 0)
        return 0;

    if (needlesize > haystacksize)
        return -1;

    for (int j = 0; j <= haystacksize - needlesize; j++) {
        int match = 1;
        for (int k = 0; k < needlesize; k++) {
            if (haystack[j + k] != needle[k]) {
                match = 0;
                break;
            }
        }
        if (match)
            return j;
    }

    return -1; 
}
