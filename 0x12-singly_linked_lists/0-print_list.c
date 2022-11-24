#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("%s\n", h->str);
		h = h->next;
		n++;
	}
	return (n);
}
