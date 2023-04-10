#include "main.h"

/**
 * binary_to_uint - binary number to unsigned int
 * @b: string with the binary number
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int nel;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (nel = 0; b[nel]; nel++)
	{
		if (b[nel] < '0' || b[nel] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[nel] - '0');
	}

	return (dec_val);
}
