#include "main.h"

/**
 *print_sign - the signof the number is printed
 *@n: sign to be printed
 *Return 1 if n is greater than zero
 *0 if n is zero
 *-1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
