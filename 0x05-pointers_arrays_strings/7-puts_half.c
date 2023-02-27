#include "main.h"
/**
 * puts_half - it will print half of a string
 * if odd n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of the string
 */
void puts_half(char *str)
{
	int z;
	int j;
	int nel;

	nel = 0;

	for (z = 0; str[z] != '\0'; z++)
		nel++;

	j = (nel / 2);

	if ((nel % 2) == 1)
		j = ((nel + 1) / 2);

	for (z = j; str[z] != '\0'; z++)
		_putchar(str[z]);
aadded this
	_putchar('\n');
}
