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

	if (*head != NULL)
	{
		new = *head;
	}
	else
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	head = &new;
	return (new);
}
