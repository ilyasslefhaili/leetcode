void reverseString(char* s, int S){
    int l;
    int h;
    char temp;

    h = S - 1;
    l = 0;
    while (l < h)
    {
        temp = s[l];
        s[l] = s[h];
        s[h] = temp;
        l++;
        h--;
    }
}