#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 * @h: the list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
