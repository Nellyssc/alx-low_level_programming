#include <stdio.h>
/**
 *main - Entry point
 *description: numbers comb
 *Return: 0
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
		if (k == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

