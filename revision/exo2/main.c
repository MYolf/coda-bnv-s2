#include <stdio.h>
#include <stdlib.h>

char seven_letter(char *str, int box) {
    char letter;
    letter = str[box];
    return letter;
}

int main() {
    char str[14] = "Hello World !\n";
    printf("%c\n", seven_letter(str, 0)); // str sert a avoir la phrase ("Hello World !", celle que je déclare ligne au dessu.) et le numero = box (qui renvoie la lettre numero...)
}