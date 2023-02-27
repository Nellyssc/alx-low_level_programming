#include "main.h"
/**
 * print_rev - it will print a string in reverse and then a new line
 *description this function will print on reverse followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int nellysalama = 0;
	int j;

	while (*s != '\0')
	{
		nellysalama++;
		s++;
	}
	s--;
	for (j = nellysalama; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
