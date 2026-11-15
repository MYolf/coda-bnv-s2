#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tic-tac-toe.h"

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
    int coups = 0;
    while (gagne(tab, 'X') == 0 && gagne(tab, 'O') == 0 && coups < 9)
    {
        joueur(tab);
        coups++;
        if (gagne(tab, 'X') == 0 && coups < 9)
        {
            ordinateur(tab);
            coups++;
        }
    }
    if (gagne(tab, 'X') == 1)
        printf("\nVous avez gagne !\n");
    else if (gagne(tab, 'O') == 1)
        printf("\nLe bot a gagne !\n");
    else
        printf("\nMatch nul !\n");

    int i = 0;
    while (tab[i] != NULL)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}