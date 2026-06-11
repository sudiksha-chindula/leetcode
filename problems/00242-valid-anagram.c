bool isAnagram(char* s, char* t) {
    int found=0;
    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    if (strlen(s)==1 && strlen(t)==1)
    {
        if (s[0]!=t[0])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int i=0;
    int j=0;
    
    for (int i=0; i<strlen(s); i++)
    {
        int found=0;
        for (int j=0; j<strlen(t); j++)
        {
            if(s[i]==t[j])
            {
                //printf("found %c %c", s[i], t[j]);
                found=1;
                break;
            }
        }
        if(found==0)
        {
            return false;
        }
    }
    
return true;
}