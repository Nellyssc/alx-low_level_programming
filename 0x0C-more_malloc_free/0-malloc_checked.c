#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - here we dynamically memory allocate using malloc
 * @b: allocated bytes
 * Return: pointer to mem allocated
 */

void *malloc_checked(unsigned int b)

{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);

}
