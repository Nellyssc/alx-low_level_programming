#include <stdio.h>
/**
 *main - entry
 *description - printing alphabets backwards
 *Return: 0 always
 */
int main(void)
{
	int j = 122;

	while (j >= 97)
	{
		putchar(j);
		j--;
	}
	putchar('\n');
	return (0);
}
