/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** generateParenthesis(int n, int* returnSize) {
    char* current=malloc(100*sizeof(char));
    char** answer = malloc(100*sizeof(current));
    int ac=0;
    char* parent = malloc(100*sizeof(char));
    int pc=0;
    for (int i=0; i<n; i++)
    {
        parent[pc++]='(';
    }
    for (int i=0; i<n; i++)
    {
        parent[pc++]=')';
    }
    current=parent;
    answer[ac++]=current;
    for (int i=0; i<(2**n); i++)
    {
        cycle++;
        int index=0;
        for (int j=0; j<2*n; j++)
        {
            if (current[index]=='(' || current[index]==')')
            {
                break;
            }
            if (cycle>=0 && cycle<2*n)
            {
                current[index++]=parent[cycle];
                cycle++;
            }
            else if (cycle>=0 && cycle>2*n)
            {
                cycle=cycle%(2*n);
            }
        }
        for (int m=index; m>-1; m--)
        {
            
        }
    }
}