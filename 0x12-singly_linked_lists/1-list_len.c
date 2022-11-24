#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: the address of the linked list
 * Return: returns the nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return n;
}
