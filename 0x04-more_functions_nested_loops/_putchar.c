#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes characters
 *@c: charcter to be inputed
 *description it will print put characters
 *Return 0 when successful
 */
int _putchar(char c)
{
	return (write(1, &c, !));
}
