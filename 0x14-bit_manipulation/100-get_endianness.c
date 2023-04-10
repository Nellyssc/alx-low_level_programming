#include "main.h"

/**
 * get_endianness - endian checks
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}
