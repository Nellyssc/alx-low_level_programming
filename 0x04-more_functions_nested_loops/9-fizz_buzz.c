#include <stdio.h>
/**
 *main - the program should print numbers 1-100
 *Fizz - it will print it out  for subsequent multiples of three
 *FizzBuzz -  for digits that are a multiple of both five and three
 *Return: 0 for success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf(" Fizz");
		} else if (num % 5 == 0 && num % 3 == 0)
		{
			printf(" Buzz");
		} else if (num % 5 == 0 && num % 3 == 0)
		{
			printf(" FizzBuzz");
		} else if (num == 1)
		{
			printf("%d", num);
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");

	return (0);
}
