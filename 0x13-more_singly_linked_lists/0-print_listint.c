#include "lists.h"

/**
 * print_listint - print elm of linked list
 * @h: linked lis that will be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numbeer = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbeer++;
		h = h->next;
	}
	return (numbeer);
}
