#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: Address of head of list
 * @idx: index
 * @n: the new data
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *cur = *head;
	listint_t *temp;

	while (; i <= idx; i++)
	{
		if (cur == NULL)
			return (NULL);
		if (cur->next == NULL)
			break;
		cur = cur->next;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = cur->next;
	cur->next = temp;
	return (temp);
}
