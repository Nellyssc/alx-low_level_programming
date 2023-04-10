#include "main.h"

/**
 * clear_bit - set 0 to what u are given
 * @n: pointer to the digit to change
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 300)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
