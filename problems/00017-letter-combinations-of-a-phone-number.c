/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 struct mapping
 {
    char d;
    char l1;
    char l2;
    char l3;
 };
char** letterCombinations(char* digits, int* returnSize) {
    char** result = malloc(100*sizeof(char*));
    struct mapping mapped = malloc(10*sizeof(struct mapping));
    int c=0;
    int asciival=97;
    for (int i=2; i<10; i++)
    {
        mapped[c].d=char(i);
        mapped[c].l1=asciival++;
        mapped[c].l2=asciival++;
        mapped[c++].l3=asciival++;
    }
    int digitlength=strlen(digits);
    int c2=0;
    char digitind[25]={0};  //extracting mapped letters
    for (int i=0; i<digitlength; i++)   //loop to traverse digits in given number
    {
        char digit = digits[i];
        for (int j=0; j<c; j++) //loop to check with maps
        {
            if (mapped[j].d==digit)
            {
                digitind[c2++]=mapped[j].l1;
                digitind[c2++]=mapped[j].l2;
                digitind[c2++]=mapped[j].l3;
            }
        }
    }
    for (int i=0; i<25; i++)
    {
        char rep = malloc(5*sizeof(char));
        rep
    }
}