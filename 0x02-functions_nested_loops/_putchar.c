#include "main.h"
#include <unistd.h>

/**
 * _putchar -it will wrrite the c character to stdout
 *@c: the character
 *Return: 1(success)
 */
int _putchar(char  c)
{
	return (write(1, &c,  1));
}
