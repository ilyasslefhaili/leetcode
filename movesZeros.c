
void moveZeroes(int* nu, int n){
    int i;
    int j;
    int temp;
        
    i = 0;
    j = 1;
    while (j < n)
    {
        if (nu[i] == 0)
        {
            while (j < n && nu[j] != 0 )
            {
                temp = nu[i];
                nu[i] = nu[j];
                nu[j] = temp;
                i++;
                j++;
            }
        }
        if (nu[i] != 0 && nu[j] == 0)
        {
            i = j;
            j = i + 1;
        }
        if (j < n && nu[j] == 0)
            j += 1;
        else if (j < n && nu[i] != 0 && nu[j] != 0)
        {
            i++;
            j++;
        }
    }
}