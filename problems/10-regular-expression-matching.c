bool isMatch(char* s, char* p) {
    int lens = strlen(s);
    int lenp = strlen(p);
    int i=0;
    while (i<lens && i<lenp)
    {
        if (s[i]!=p[i] && p[i]!='*' && p[i]!='.')
        {
            return false;
        }
        else if (p[i]=='.')
        {
            if (s[i]>=97 && s[i]<=122)
            {
                i++;
            }
        }
        else if (p[i]=='*')
        {
            for (int j=i; j<lens; j++)
            {
                if (p[i-1]==s[j] || p[i-1]=='.')    
                    j++;
                else
                    return false;       //needed for testcase s=aab, p=c*a*b --- 22, 151, 267, 265
            }
            return true;
        }
        i++;
    }
    if (lens==lenp)
        return true;
    else
        return false;

}