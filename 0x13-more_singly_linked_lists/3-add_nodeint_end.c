#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: the head of the list
 * @n: the value of the new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	return (temp);
}
