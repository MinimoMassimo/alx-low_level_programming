#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: pointer to pointer of head of list
 * @n: the value of the new node
 * Return: address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new;

	if (*head == NULL)
		return NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	cur = *head;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new;
	new->prev = cur;

	return (new);
}
