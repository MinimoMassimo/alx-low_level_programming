#include "lists.h"

/**
 * _len - outputs the length of a list
 * @h: pointer to head of list
 * Return: the number of nodes in list
 */

unsigned int _len(const dlistint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to pointer to head of list
 * @index: the position
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	if (index >= _len(*head))
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (temp->next && index)
	{
		index -= 1;
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
