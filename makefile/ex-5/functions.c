#include <stdlib.h>
#include <stdio.h>

//exercice 1 des fonctions
void print_str(char *str) {
    printf("%s", str);
} 

//exercice 2 des fonctions
int add(int nb1, int nb2) {
    int sommes = nb1 + nb2;
    return(sommes);
}

//exercice 3 des fonctions
double compute_average(double nb1, double nb2, double nb3) {
    double average = (nb1 + nb2 + nb3) / 3;
    return(average); 
}