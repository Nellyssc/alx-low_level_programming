#include <stdio.h>
/**
 *main - entry point
 *description: excluding e and q
 *Return: always 0 (success)
 */
int main(void)
{
	int o = 97;

	while (o <= 122)
	{
		if (o == 101 || o == 113)
		{
			o++;
			continue;
		}
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
