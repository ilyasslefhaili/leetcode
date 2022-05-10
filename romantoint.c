
int romanToInt(char * s){
    int i;
    int e;
    int table[strlen(s)];

    i = 0;
    e = 0;
    while (s[i])
    {
        if (s[i] == 'L')
            table[i] = 50;
        else if(s[i] == 'V')
            table[i] = 5;
        else if(s[i] == 'D')
            table[i] = 500;
        else if(s[i] == 'I')
             table[i ]= 1;
        else if (s[i] == 'M')
            table[i] = 1000;
        else if(s[i] == 'C')
            table[i] = 100;
        else if(s[i] == 'X')
            table[i] = 10;
        else if(s[i] == 'L')
            table[i] = 50;
        if (i > 0 && table[i - 1] < table[i])
        {
            e -= table[i - 1];
            e += table[i] - table[i-1];
        }
        else
            e += table[i];
        i++;
    }
    return (e);
}
