#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at index
 * @h: pointer to pointer to head of list
 * @idx: the index
 * @n: the data of new node
 * Return: address of the new node if success, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur;

	if (*h == NULL && idx != 0)
		return (NULL);
	cur = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 0 && cur->next)
	{
		idx -= 1;
		cur = cur->next;
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	else if (idx != 0)
		return (NULL);

		cur = cur->prev;
		return (add_dnodeint(&(cur->next), n));
}
