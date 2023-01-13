#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
