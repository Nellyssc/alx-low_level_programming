#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  number of elements in a linked list is returned
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
