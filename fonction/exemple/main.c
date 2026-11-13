#include <stdio.h>
#include <stdlib.h>

double compute_average(double number1, double number2)
{
	double average = (number1 + number2) / 2;

	return(average);
}

int main()
{
	double average;

	average = compute_average(12, 15);

	printf("%.2f\n", average);

	average = compute_average(10, 20);

	printf("%.2f\n", average);
}