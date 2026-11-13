#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2) {
    int sommes = nb1 + nb2;
    return(sommes);
}

int main() {
    int sommes;
    sommes = add(10, 30);
    printf("%d\n", sommes);
}