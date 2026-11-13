#include <stdlib.h>
#include <stdio.h>

void get_hours_and_minutes(int total_minutes, int *hours, int *minutes)
{
	*hours = total_minutes / 60;
	*minutes = total_minutes % 60;
}

int main()
{
	int total_minutes;
	int minutes = 0;
	int hours = 0;

	printf("Nombre total de minutes ?\n");
	scanf("%d", &total_minutes);

	get_hours_and_minutes(total_minutes, &hours, &minutes);

	printf("Cela fait une durée de %d heures et %d minutes\n", hours, minutes);
}