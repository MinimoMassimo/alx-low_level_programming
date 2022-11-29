#include "lists.h"

/**
 * free_listint2 - sets the head to null
 * @head: pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
		return;
	free_listint(*head);
	*head = NULL;
}
