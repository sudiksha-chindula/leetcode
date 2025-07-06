char* convert(char* s, int numRows) {
    int len = strlen(s);
    char* new = malloc((len + 1) * sizeof(char));
    new[len] = '\0';
    int current = 0;
    int diff = 2 * numRows - 2;     //cycle length logic

    for (int i = 0; i<numRows && current<len; i++) 
    {
        int j = i;
        while (j < len) 
        {
            new[current++] = s[j];
            if (i != 0 && i != numRows - 1) 
            {
                int j2 = j+diff-2*i;
                if (j2 < len) 
                {
                    new[current++] = s[j2];
                }
            }
            j += diff;
        }
    }

    return new;
}
