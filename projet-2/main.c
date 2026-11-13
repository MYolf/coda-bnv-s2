#include <stdio.h>
#include <stdlib.h>

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

char grid(char **tab)
{
    int i = 0;
    int j = 0;
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

int joueurs(char **str1)
{
    int joueur;
    int ligne;
    int colonne;
    while (true)
    {
    }
}

void tableau()
{
    printf("\n Bienvenu dans Tic Tac Toe !\n");
    printf("Voici la grille : \n");
    char **tab = malloc(4 * sizeof(*tab));
    tab[3] = NULL;
    tab[0] = str_cpy("0 | 1 | 2");
    tab[1] = str_cpy("3 | 4 | 5");
    tab[2] = str_cpy("6 | 7 | 8");
    grid(tab);
    return tableau;
}

int main()
{
    tableau()
}