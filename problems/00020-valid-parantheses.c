bool isValid(char* s) {
    char stack[10000];
    int f=0;
    int c=0;
    int nl=0;
    int nr=0;
    for (int i=0; s[i]!='\0'; i++)
    {
        if (c==0 && (s[i]==')' || s[i]=='}' || s[i]==']'))      
        {
            return false;
        }
        if (s[i]==')' && stack[--c]=='(')
        {
            stack[c]='0';
            nr++;
        }
        else if (s[i]=='}' && stack[--c]=='{')
        {
            stack[c]='0';
            nr++;
        }
        else if (s[i]==']' && stack[--c]=='[' && c>-1)
        {
            stack[c]='0';
            nr++;
        }
        else if (s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            stack[c]=s[i];
            c++;
            nl++;
        }

    }
    if (c==0 && nl==nr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}