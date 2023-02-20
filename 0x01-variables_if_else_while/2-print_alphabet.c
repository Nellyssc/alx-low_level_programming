#include <stdio.h>
/**
 *main - entry point
 *description - pg using putchar
 *Return: Always 0 (success)
 */
int main(void)
{
	int z = 97;

		while (z <= 122)
		{
			putchar(z);
			z++;
		}
		putchar('\n');
		return (0);
}
