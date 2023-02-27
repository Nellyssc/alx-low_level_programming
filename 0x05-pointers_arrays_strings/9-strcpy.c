#include "main.h"

/**
 * char *_strcpy - it will  copy string pointed to src to the dest
 * @dest: this is the final location where  data is copied to
 * @src: it will gets its input from there
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int jay = 0;
	int nell = 0;

	while (*(src + nell) != '\0')
	{
		nell++;
	}
	for (jay ; jay < l ; jay++)
	{
		dest[jay] = src[jay];
	}
	dest[jay] = '\0';
	return (dest);
}
