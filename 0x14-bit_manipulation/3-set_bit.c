#include "main.h"

/**
 * set_bit - set 1 to given bit
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
