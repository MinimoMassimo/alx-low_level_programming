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
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;
	return (temp);
}
