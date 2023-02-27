#include "main.h"
/**
 * puts2 - it will print evry character of a string then anew line
 * beginning with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int nell = 0;
	int q = 0;
	char *h = str;
	int j;

	while (*h != '\0')
	{
		h++;
		nell++;
	}
	q = nel - 1;

	for (j = 0 ; j <= q ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
