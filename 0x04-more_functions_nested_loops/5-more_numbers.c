#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int nel, jo;

	for (nel = 1; nel <= 10; nel++)
	{
		for (jo = 0; jo <= 14; jo++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (jo % 10 + '0');
		}
		_putchar('\n');
	}
}
