#include <stdio.h>

int main() {
    int parking [2][4] = {{1, 2, 3, 4}, {1, 4, 8, 16}};

    for (int i = 0; i < 2; i++) {
        
        for (int j = 0; j < 4; j++) {
            printf("Il y a %d de places dans les étages %d \n", i, j);
        }
    }
    return 0;
}