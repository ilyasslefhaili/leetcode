char * reverseWords(char * s){
    int l;
    int h;
    int i;
    int temp;

    i = 0;
    while (s[i] != '\0')
    {
        l = i;
        while (s[i] && s[i] != ' ')
            i++;
        h = i - 1;
        while (l < h)
        {
            temp = s[l];
            s[l] = s[h];
            s[h] = temp;
            l++;
            h--;
        }
        if (s[i])
            i += 1;
    }
    return (s);
}