#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: pointer to head of list
 * @index: the index
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *cur = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	cur = temp->next;
	temp->next = cur->next;
	free(cur);
	cur = NULL;
	return (1);
}
