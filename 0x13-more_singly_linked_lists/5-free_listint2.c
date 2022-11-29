#include "lists.h"

/**
 * free_listint2 - sets the head to null
 * @head: pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (**head).next;
		free(temp);
	}
}
