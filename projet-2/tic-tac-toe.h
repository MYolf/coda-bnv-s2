#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

int str_len(char *str);
char *str_cpy(char *str);
void grid(char **tab);
int case_libre(char **tab, int choix);
void joueur(char **tab);
void ordinateur(char **tab);
int gagne(char **tab, char symbole);

#endif
