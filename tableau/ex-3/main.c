#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
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

int main()
{
	str_rev("J'adore LILIOU !");
}