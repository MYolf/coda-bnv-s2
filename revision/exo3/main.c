#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compar(char *str1, char *str2) {
    int i = 0;
    int error = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] == str2[i]) {
            error = error + 1;
        }
        
        i++;
    }
    return error;
}

int main() {
    int diff = compar("hello world", "alloo world");
    printf("nombre de differences : %d\n", diff);
}