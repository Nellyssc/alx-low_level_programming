#include "lists.h"

/**
 * free_listint_safe - linked list is freed
 * @h: first node pointer
 * Return: freed list elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int change;
	listint_t *temp;
