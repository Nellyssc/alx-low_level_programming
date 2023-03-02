#include "main.h"
#include <stdio.h>

/**
 * rot13 -  it encodes rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int r;
	char data0[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[m] == data0[r])
			{
				s[m] = data1[r];
				break;
			}
		}
	}
	return (s);
}
