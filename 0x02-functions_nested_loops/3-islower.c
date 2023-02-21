#include "main.h"

/**
 * _islower - checker it checks if character is in lower or upper
 * @c: the character to be checked
 * Return: 0 if uppercase, 1 if lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

