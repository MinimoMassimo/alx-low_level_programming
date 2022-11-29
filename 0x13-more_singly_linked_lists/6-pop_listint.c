#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	x = (**head).n;
	temp = *head
	*head = (**head).next;
	free(temp);
	return (x);
}
