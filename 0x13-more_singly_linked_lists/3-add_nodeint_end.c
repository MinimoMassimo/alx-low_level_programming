#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: the head of the list
 * @n: the value of the new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;

	if (head == NULL)
		return (NULL);
	last = *head;
	while (last != NULL)
	{
		last = last->next;
	}
	last->n = n;
	last->next = NULL;
	return (last);
}
