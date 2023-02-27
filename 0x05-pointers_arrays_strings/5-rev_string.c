#include "main.h"

/**
 * rev_string(char *s) - it will reverse a string
 * @s: Input string
 * description the function will reverse a given string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int nel;

	while (s[counter] != '\0')
	counter++;
	for (nel = 0; nel < counter; nel++)
	{
		counter--;
		rev = s[nel];
		s[nel] = s[counter];
		s[counter] = rev;
	}
}
