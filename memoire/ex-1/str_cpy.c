#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return i;
}

char *str_cpy(char *str)
{
    char *cpy = malloc(str_len(str) + 1 * sizeof(char));
    cpy[str_len(str)] = '\0';
    int i = 0;
    while (i != str_len(str))
    {
        cpy[i] = str[i];
        i++;
    }
    return cpy;
}
