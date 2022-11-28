#include "lists.h"

/**
 * listint_len - counts number of elements in a list
 * @h: the linked list
 * Return: the num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
