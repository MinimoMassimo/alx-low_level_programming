#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
