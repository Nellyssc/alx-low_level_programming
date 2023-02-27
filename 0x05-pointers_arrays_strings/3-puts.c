#include "main.h"
/**
 *_puts - prints a string adnd then a line as our standardoutput
 * @str: string to be printed
 *description the function will print  a string then a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
