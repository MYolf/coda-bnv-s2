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

int case_libre(char **tab, int choix) // aide n°2 cf : coda-bnv-s2/projet-2/AIDE_EXTERIEURE.md
{
    int ligne = choix / 3;
    int colonne = (choix % 3) * 4;
    if (tab[ligne][colonne] != 'X' && tab[ligne][colonne] != 'O')
        return (1);
    return (0);
}

void joueur(char **tab)
{
    int choix = 0;
    int ligne;
    int colonne;
    printf("\nVotre tour (X). Choisissez une case libre entre 0 a 8 : ");
    scanf("%d", &choix);
    while (choix < 0 || choix > 8 || case_libre(tab, choix) == 0)
    {
        printf("Erreur,\nil faut que vous choisissiez un nombre entre 0 et 8 reessayez : ");
        scanf("%d", &choix);
    }
    ligne = choix / 3;
    colonne = (choix % 3) * 4;
    tab[ligne][colonne] = 'X';
    printf("\n");
    grid(tab);
}

void ordinateur(char **tab)
{
    int choix;
    int ligne;
    int colonne;
    choix = rand() % 9; // nombre au hasard, solution trouver sur google et utiliser la 1er semaine. la recherche : "en C, comment faire en sorte d'afficher un nombre aleatoire dans un tableau en 2D en 3 par 3 ? avec les boucles whiles"
    while (case_libre(tab, choix) == 0)
        choix = rand() % 9;
    ligne = choix / 3;
    colonne = (choix % 3) * 4;
    tab[ligne][colonne] = 'O';
    printf("Le bot joue la case %d :\n\n", choix);
    grid(tab);
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
    joueur(tab);
    ordinateur(tab);
    int i = 0;
    while (tab[i] != NULL)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}