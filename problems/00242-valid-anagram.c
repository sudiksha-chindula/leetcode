bool isAnagram(char* s, char* t) {
    int comparechars(const void* a, const void* b)
{
        char val1 = *(char*)a;
        char val2 = *(char*)b;
        if(val1<val2)
        {
            return -1;
        }
        if (val1>val2)
        {
            return 1;
        }
        return 0;
}
bool isAnagram(char* s, char* t) {
    
    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    qsort(s, strlen(s), sizeof(char), comparechars);
    qsort(t, strlen(t), sizeof(char), comparechars);
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]!=t[i])
        {
            return false;
        }
    }
    return true;
}

}