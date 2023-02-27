#include "main.h"
/**
 * swap_int - swaps the values of  integers a and b
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
