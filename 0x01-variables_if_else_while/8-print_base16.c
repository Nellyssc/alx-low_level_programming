# include <stdio.h>
/**
 *main - entry
 *description - hexadecimal printing
 *Return 0 always
 */
int main(void)
{
	int q;
	int f;

	for (q = 48; q <= 57; q++)
	{
		putchar(q);
	}
	for (f = 97; f <= 102; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
