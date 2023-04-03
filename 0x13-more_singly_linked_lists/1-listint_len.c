#include "lists.h"

/**
 * listint_len - returning no of elem in a linked lists
 * @h: linked list that it willbe returning
 * Return: thenumber of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
