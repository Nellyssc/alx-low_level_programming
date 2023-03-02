#include "main.h"
/**
 * _strcat - a funtion that will concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		des[n] = src[m];
		m++;
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
