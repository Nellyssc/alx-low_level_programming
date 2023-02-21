#include "main.h"
/**
 *print_last_digit - it will be printing the last number
 *@o: the digit given in the syste
 *Return:  the last digit's value
 */
int print_last_digit(int o)
{
	int lastdigit = o % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (0);
}

