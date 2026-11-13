#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
int i = 0;

while(str[i] != '\0')
{
	i = i + 1;
}
return i;
}

int main()
{
	int len;
	len = str_len("Téléphone ez");
	printf("%d\n", len);
}