#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
    int nb_words = 0;
    int i =0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            nb_words++;
        }
        else if (str[i] == '\'')
        {
            nb_words++;
        }
        i = i + 1;
        
    }
    return nb_words + 1;
}
