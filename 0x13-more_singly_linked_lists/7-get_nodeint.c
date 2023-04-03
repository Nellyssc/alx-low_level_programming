#include "lists.h"

/**
 * get_nodeint_at_index - certain index in a linked list will be returned
 * @head: node one the linked list
 * @index: index of node to return
 * Return: pointer to the new node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;

	listint_t *temp = head;

	while (temp && z < index)
	{
		temp = temp->next;
		z++;
	}

	return (temp ? temp : NULL);
}
