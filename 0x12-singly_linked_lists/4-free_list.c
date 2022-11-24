#include "lists.h"

/**
 * free_list - frees a list
 * @head: the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->next != NULL)
		free(temp);
	free_list(head);
}
