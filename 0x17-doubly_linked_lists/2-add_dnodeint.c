#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: value of the new node
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL)
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	return (new_node);
}
