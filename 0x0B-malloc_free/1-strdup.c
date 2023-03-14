#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: the char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *aaa;
	int n, j = 0;

	if (str == NULL)

		return (NULL);

	n = 0;

	while (str[n] != '\0')

		n++;

	aaa = malloc(sizeof(char) * (n + 1));

	if (aaa == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		aaa[j] = str[j];

	return (aaa);
}
