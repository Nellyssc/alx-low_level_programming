#include <stdlib.h>
#include "main.h"

/**
 *_memset - the memory takes a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;

	}

	return (s);

}
/**
 *_calloc - array memory allocation is hereby done
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)

		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);

}
