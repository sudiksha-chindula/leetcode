char* longestPalindrome(char* s) {
    int len=0;
    for(len=0; s[len]!='\0'; len++);    //len=strlen(s)
    int maxlen = 1, start=0;            //get start index and length value in loops
    for (int i=0; i<len; i++)
    {   
        int right = i, left = i;
        while(right<len && left>=0 && s[right]==s[left])
        {   
            if(right-left+1>maxlen)
            {
                maxlen=right-left+1;
                start=left;
            }
            right++;
            left--;
            
        }


        right=i, left=i+1;
        while (right<len && left>=0 && s[right]==s[left])
        {
            if (right-left+1>maxlen)
            {
                maxlen=right-left+1;
                start=left;
            }
            right++;
            left--;
            
        }

    }
    char * longest = malloc((maxlen+1)*sizeof(char));
    for (int i=0; i<maxlen; i++)        //strcpy
    {   
        longest[i]=s[start+i];
    }
    longest[maxlen]='\0';
    return longest;
}