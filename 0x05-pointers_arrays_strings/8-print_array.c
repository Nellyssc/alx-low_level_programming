#include "main.h"

/**
 * print_array - it should print elements of an array plus a new line
 * @a: the given array
 * @n: is the given number of elementsto be printed in the array
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int chess;

	for (chess = 0; chess < (n - 1); chess++)
	{
		printf("%d, ", a[chess]);
	}
		if (chess == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
