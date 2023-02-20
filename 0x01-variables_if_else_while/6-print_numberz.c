#include <stdio.h>
/**
*main - entry
*description -  printing using putchar base 10 digits
*Return: 0
*/
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar(j + 48);
	}
	putchar('\n');
	return (0);
}
