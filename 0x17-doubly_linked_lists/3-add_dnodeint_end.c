#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: pointer to pointer of head of list
 * @n: the value of the new node
 * Return: address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	last->next = new;

	return (new);
}
