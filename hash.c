#include <stdlib.h>
typedef struct entries
{
    int             key;
    char            *value;
    struct entries  *next;
}t_entries;

typedef struct hash{
    t_entries **first;
}t_hash;

int hash_function(char *value, int size_h)
{
    int i;
    long int key;

    i = 0;
    key = 0;
    while (value[i])
    {
        key = key * 37 + value[i];
        i++;
    }
    key = key % size_h;
    return (key);
}

t_hash *hash_create(int size)
{
    t_hash *hash = malloc(sizeof(t_hash));
    int i;

    hash->first = malloc(sizeof(t_entries*) * size);
    i = 0;
    while (i < size)
    {
        hash->first[i] = NULL;
        i++;
    }
    return (hash);
}

void    ft_insert(char *value, int size_h, t_hash *hash)
{
    t_entries *elmt;
    t_entries *temp;
    int key;
    
    key = hash_function(value, size_h);
    elmt = malloc(sizeof(t_entries));
    elmt->key = key;
    elmt->value = value;
    elmt->next = NULL;
    if (hash->first[key] == NULL)
    {
        hash->first[key] = elmt;
        return ;
    }
    temp = hash->first[key];
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = elmt;
}

int lengthOfLongestSubstring(char * s){
    t_hash *hash;
    int end;
    int     j;
    int    c;
    char str[100];
    char    e;
    int i;

    i = 0;
    c = 0;
    while (s[i] != '\0')
    {
        j = 0;
        hash = hash_create(strlen(s));
        while (s[i] != '\0')
        {
            e = s[i];
            printf("l\n");
            end = hash_function(strdup(&e), strlen(s));
            if (hash->first[end] == NULL)
            {
                ft_insert(strdup(&e), strlen(s), hash);
                i++;
                str[j] = s[i];
                j++;
            }
            else
                break ;
        }
        str[j + 1] = '\0';
        if (strlen(str) > c)
            c = strlen(str);
    }
    return (c);
}

int main()
{
    printf("%d", lengthOfLongestSubstring("abcabcbb"));
}