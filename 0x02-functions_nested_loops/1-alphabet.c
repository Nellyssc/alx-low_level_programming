#include "main.h"
/**
 *print_alphabet -  the printing clause
 *Description:  using putchar while printing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
