#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * description: alphabets
 */
void print_alphabet_x10(void)
{

	int nel;
	char la;

	for (nel = 0; nel <= 9; nel++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
