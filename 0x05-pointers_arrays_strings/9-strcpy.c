#include "main.h"

/**
 * char *_strcpy - it will  copy string pointed to src to the dest
 * @dest: this is the final location where  data is copied to
 * @src: it will gets its input from there
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
