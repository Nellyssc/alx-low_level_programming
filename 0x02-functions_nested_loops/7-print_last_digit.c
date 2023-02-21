#include "main.h"
/**
 *print_last_digit - it will be printing the last number
 *@n: the digit given in the syste
 *Return:  the last digit's value
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (0);
}

