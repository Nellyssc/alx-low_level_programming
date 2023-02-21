#include "main.h"

/**
 *_isalpha - looking for any letters
 *@c: character to be checked
 *description looking for alpha
 *Return: 1 if its an alphabet if not then return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
