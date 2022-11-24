#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds node to end of list
 * @head: pointer to head of the list
 * @str: the value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *temp = *head;

	curr = malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);
	curr->str = strdup(str);
	curr->len = strlen(str);
	curr->next = NULL;
	if (*head == NULL)
		*head = curr;
	else
	{
		for (;;)
		{
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		temp->next = curr;
	}
	return (curr);
}
