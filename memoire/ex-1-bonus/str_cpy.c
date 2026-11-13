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
void str_rev(char *str)
{
    int i;
    i = str_len(str);
    while (i >= 0)
    {
        printf("%c", str[i]);
        i = i - 1;
    }
    printf("\n");
}

char *str_rev_cpy (char *str) {
    char *cpy_rev = malloc(str_len(str) + 1 * sizeof(char));
    cpy_rev[str_len(str)] = '\0';
    while (i >= str_len(str)) {
        str_rev[]
    }
}