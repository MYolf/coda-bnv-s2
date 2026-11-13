#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main() {
    //function 1
    print_str("Théo Arcelin\n");
    //function 2
    int sommes = add(13, 10);
    printf("née le %d avril 2008\n", sommes);
    //function 3
    double average;
    average = compute_average(19.33, 15.50, 16.92);
    printf("Et à %.2f de moyenne à Coda School !\n", average);
}
