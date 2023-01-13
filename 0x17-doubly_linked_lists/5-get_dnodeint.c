#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to head of list
 * @index: the index
 * Return: NULL if node doesn't exit, the address of the node otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy;

	if (!*head)
		return (NULL);
	copy = head;

	while (copy->next && index)
	{
		copy = copy->next;
		index -= 1;
	}
	if (index == 0)
		return (copy);
	return (NULL);
}
