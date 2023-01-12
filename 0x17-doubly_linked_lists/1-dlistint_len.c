#include "lists.h"

/**
 * dlistint_len - says how many elements in a linked list
 * @h: pointer to list head
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
