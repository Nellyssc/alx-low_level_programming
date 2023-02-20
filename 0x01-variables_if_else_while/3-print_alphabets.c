#include <stdio.h>
/**
 *main - entry point
 *description: oth lower and upper case
 *Return: always 0 (success)
 */
int main(void)
{
	int j = 97;
	int r = 65;

	while (j <= 122)
	{
		putchar(j);
		j++;
	}
	while (r <= 90)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
