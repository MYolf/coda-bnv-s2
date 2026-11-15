#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include "tic-tac-toe.h"

int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len = len + 1;
    }
    return (len);
}

char *str_cpy(char *str)
{
    int len = str_len(str);
    char *copy = malloc((len + 1) * sizeof(char));
    int i = 0;
    copy[len] = '\0';
    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i = i + 1;
    }

    return (copy);
}

void grid(char **tab)
{
    int i = 0;
    while (tab[i] != NULL)
    {
        int j = 0;
        while (tab[i][j] != '\0')
        {
            printf("%c", tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    char **tab = malloc(4 * sizeof(*tab));
    srand(time(NULL));
    tab[3] = NULL;
    tab[0] = str_cpy("0 | 1 | 2");
    tab[1] = str_cpy("3 | 4 | 5");
    tab[2] = str_cpy("6 | 7 | 8");

    printf("\nBienvenue dans Tic Tac Toe !\n");
    printf("Vous jouez les X, le bot joue les O.\n");
    printf("Les cases sont numerotees de 0 a 8.\n\n");
    grid(tab);
    int i = 0;
    while (tab[i] != NULL)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}