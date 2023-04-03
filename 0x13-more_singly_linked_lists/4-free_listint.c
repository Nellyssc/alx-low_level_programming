#include "lists.h"

/**
 * free_listint - it will act like free hence it freeslist
 * @head: listint_t wat we will free
 *return: the freed list
 */
void free_listint(listint_t *head)
{
	listint_t *temprol;
	
	while (head)
	{
		temprol = head->next;
		free(head);
		head = temprol;
	}
}
