char* convert(char* s, int numRows) {
    
    int len = strlen(s);
    char* new = malloc((len+1)*sizeof(char));
    int current=0;
    int diff= 2 * numRows - 2;

    if (numRows==1)
    {
        new=s;
        return new;
    }

    for (int i=0; i<numRows; i++) 
    {
        for (int j=i; j<len && current<len; j+=diff)      //current<len must for address error free
        {
            new[current] = s[j];
            current++;
            int middle = j+diff-2*i;        //taken help with logic, need to revisit
            if (i!=0 && i!=numRows-1 && middle<len) 
            {
                new[current] = s[middle];
                current++;
            }
        }
    }

    new[current] = '\0'; 
    return new;
}

