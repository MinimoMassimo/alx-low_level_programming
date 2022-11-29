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
	unsigned int i = 1;
	listint_t *cur = *head;
	listint_t *temp;

	if (cur == NULL && idx != 0)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (; i < idx; i++)
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}
	temp->next = cur->next;
	cur->next = temp;
	return (temp);
}
