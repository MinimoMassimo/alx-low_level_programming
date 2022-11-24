#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beggining of a list
 * @head: the head node
 * @str: the value of the new node
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (*head == NULL)
	{
		&head = malloc(sizeof(list_t));
		if (&head == NULL)
			return (NULL);
		&head->str = strdup(str);
		&head->len = strlen(str);
		&head->next = NULL;
	}
	else
	{
		new = &head;
		&head->str = strdup(str);
		&head->len = strlen(str);
		&head->next = new;
	}
	return (&head);
}
