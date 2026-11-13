#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[13] = "hello world!\n";
    int i = 0;
    while ((str[i] != '\0') && (str[i + 1]) != '\0' ) {
        printf("%c", str[i]);
        i = i + 2;
        
    }
    printf("\n");
    return 0;
}