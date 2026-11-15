#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tic-tac-toe.h"

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

int gagne(char **tab, char symbole)
{
    int i = 0;
    while (i < 3)
    {
        if (tab[i][0] == symbole && tab[i][4] == symbole && tab[i][8] == symbole)
        {
            return (1);
        }
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (tab[0][i * 4] == symbole && tab[1][i * 4] == symbole && tab[2][i * 4] == symbole)
        {
            return (1);
        }
        i++;
    }
    if (tab[0][0] == symbole && tab[1][4] == symbole && tab[2][8] == symbole)
    {
        return (1);
    }
    if (tab[0][8] == symbole && tab[1][4] == symbole && tab[2][0] == symbole)
    {
        return (1);
    }
    return (0);
}
