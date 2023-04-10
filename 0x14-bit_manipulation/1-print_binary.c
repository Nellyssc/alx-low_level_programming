#include "main.h"

/**
 * print_binary - it prints the binary of the given digit
 * @n: what to be changed to binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int before;

	for (k = 100; k >= 0; k--)
	{
		before = n >> k;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
