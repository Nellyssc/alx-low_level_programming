#include "main.h"

/**
 * flip_bits - the bits to be changed ae counted n returned
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, count = 0;
	unsigned long int bef;
	unsigned long int ex = n ^ m;

	for (v = 20; v >= 0; v--)
	{
		bef = ex >> v;
		if (bef & 1)
			count++;
	}

	return (count);
}
