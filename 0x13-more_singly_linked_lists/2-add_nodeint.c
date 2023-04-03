#include "lists.h"

/**
 * add_nodeint - at the beginning of a linked list we add a node
 * @head: pointer to the first node in the list
 * @n: wat we add
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
