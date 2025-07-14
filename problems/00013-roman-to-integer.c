int romanToInt(char* s) {
    char* temp = s;
    int num=0;
    //(*temp+1) converts to ascii and adds 1 to the value
    while(*temp!='\0')
    {
        if (*temp=='I' && *(temp+1)=='X')
        {
            num+=9;
            temp++;
            temp++;
        }
        else if (*temp=='I' && *(temp+1)=='V')
        {
            num+=4;
            temp++;
            temp++;
        }
        else if (*temp=='I')
        {
            num+=1;
            temp++;
        }
        else if (*temp=='V')
        {
            num+=5;
            temp++;
        }
        else if (*temp=='X' && *(temp+1)=='L')
        {
            num+=40;
            temp++;
            temp++;
        }
        else if (*temp=='X' && *(temp+1)=='C')
        {
            num+=90;
            temp++;
            temp++;
        }
        else if (*temp=='X')
        {
            num+=10;
            temp++;
        }
        else if (*temp=='L')
        {
            num+=50;
            temp++;
        }
        else if (*temp=='C' && *(temp+1)=='D')
        {
            num+=400;
            temp++;
            temp++;
        }
        else if (*temp=='C' && *(temp+1)=='M')
        {
            num+=900;
            temp++;
            temp++;
        }
        else if (*temp=='C')
        {
            num+=100;
            temp++;
        }
        else if (*temp=='D')
        {
            num+=500;
            temp++;
        }
        else if (*temp=='M')
        {
            num+=1000;
            temp++;
        }
    }
    return num;
}