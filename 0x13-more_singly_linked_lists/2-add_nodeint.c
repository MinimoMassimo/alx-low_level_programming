#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a list
 * @head: the head of the list
 * @n: the new node to be added
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuovo;

	nuovo = malloc(sizeof(listint_t));
	if (nuovo == NULL)
		return (NULL);
	nuovo->n = n;
	nuovo->next = *head;
	*head = nuovo;
	return();
}
