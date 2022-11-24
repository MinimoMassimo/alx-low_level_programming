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
			if ((**head).next == NULL)
				break;
			*head = (**head).next;
			printf("%s", (**head).str);
		}
		(**head).next = curr;
	}
	return (curr);
}
