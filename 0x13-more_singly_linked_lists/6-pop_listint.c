#include "lists.h"

/**
 * pop_listint - deletion of head node
 * @head: pointer to the first element
 * Return: headnode data (n)
 */
int pop_listint(listint_t **head)
{
 listint_t *temp;
 int number;

 if (!head || !*head)
 return (0);

 number = (*head)->n;
 temp = (*head)->next;
 free(*head);
 *head = temp;

 return (number);/**this is wat will be return after the code has run*/
}

