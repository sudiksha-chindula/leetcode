//empty character issues, address overflow
char* intToRoman(int num) {
    char* roman = malloc(30*sizeof(char));
    char* temp = roman;
    //c doesn't accept '', and not more than one character, hence array of strings
    char* th[] = {"", "M", "MM", "MMM"};
    char* h[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* t[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* o[]  = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    char* rm = th[num / 1000];
    while (*rm!='\0') {
        *temp = *rm;
        temp++;
        rm++;
    }

    rm = h[(num % 1000) / 100];
    while (*rm) {
        *temp = *rm;
        temp++;
        rm++;
    }

    rm = t[(num % 100) / 10];
    while (*rm) {
        *temp = *rm;
        temp++;
        rm++;
    }

    rm = o[num % 10];
    while (*rm) {
        *temp = *rm;
        temp++;
        rm++;
    }

    *temp = '\0';
    return roman;
}

