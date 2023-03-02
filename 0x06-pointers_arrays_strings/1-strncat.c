#include "main.h"
/**
 * _strncat - concatenate two strings while using n byte from the source
 * @src: input value
 * @n: input value
 * @dest: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	y++;
	x++;
	}
	dest[x] = '\0';
	return (dest);
}
