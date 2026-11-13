#include <stdlib.h>
#include <stdio.h>

int get_biggest_number(int *numbers, int size)
{
    int i = 0;
    int number_max = numbers[0];
    while (i < size)
    {
        if (number_max < numbers[i])
        {
            number_max = numbers[i];
        }
        i++;
    }
    return number_max;
}

int get_smallest_number(int *numbers, int size)
{
    int i = 0;
    int number_min = numbers[0];
    while (i < size)
    {
        if (number_min > numbers[i])
        {
            number_min = numbers[i];
        }
        i++;
    }
    return number_min;
}

void free_int_tabs(int **numbers)
{
    int i = 0;

    while (numbers[i] != NULL)
    {
        free(numbers[i]);
        i = i + 1;
    }

    free(numbers);
}

void copy_numbers(int *source, int *numbers, int length)
{
    int i = 0;

    while (i < length)
    {
        numbers[i] = source[i];
        i = i + 1;
    }
}