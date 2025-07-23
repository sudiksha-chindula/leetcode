//need to revisit
struct Map {
    char digit;
    char *letters;
};

char** letterCombinations(char* digits, int* returnSize) {
    struct Map phoneMap[] = {
        {'2', "abc"}, {'3', "def"},
        {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };

    *returnSize = 0;
    int len = strlen(digits);
    if (len == 0) return NULL;

    char* sets[4];   // Max 4 digits as per constraints
    int setLens[4];
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 8; j++) {
            if (phoneMap[j].digit == digits[i]) {
                sets[i] = phoneMap[j].letters;
                setLens[i] = strlen(phoneMap[j].letters);
                break;
            }
        }
    }

    int total = 1;
    for (int i = 0; i < len; i++) total *= setLens[i];

    char** result = malloc(total * sizeof(char*));
    for (int i = 0; i < total; i++) {
        result[i] = malloc(len + 1);
        int idx = i;
        for (int j = 0; j < len; j++) {
            int letterIdx = idx % setLens[j];
            result[i][j] = sets[j][letterIdx];
            idx /= setLens[j];
        }
        result[i][len] = '\0';
    }

    *returnSize = total;
    return result;
}

