#include "lists.h"

/**
 * free_listint2 - sets the head to null
 * @head: pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free(head);
}
