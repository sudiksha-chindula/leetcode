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
    for (int i=0; i<digitlength; i++)
    {
        char digit = digits[i];
        char* rep = malloc(digitlength*sizeof(char));
        for (int j=0; j<digitlength; j++)
        {
            result[j][i]=mapped[]
        }
    }
}
