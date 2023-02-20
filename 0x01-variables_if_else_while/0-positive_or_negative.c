#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description - this code checks the input if it is negative or positive
 *Return: Always 0 (success)
 */
int main(void)
	{
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (z > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}