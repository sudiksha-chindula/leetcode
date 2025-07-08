int reverse(int x) {

    int temp = x;
    int reverse=0;
    while(temp!=0)
    {
        int digit = temp%10;
        temp/=10;
        reverse*=10;
        reverse+=digit;
    }
    return reverse;
}
