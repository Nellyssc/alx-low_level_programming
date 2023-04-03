#include "lists.h"

/**
 * sum_listint - sum of elements in a listint_t list
 * @head: node one in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);/** the sum of elements is returned*/
}
