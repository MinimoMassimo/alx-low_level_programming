#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to the head node
 * @index: the nth position
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *cur = head;

	for (; i < index && cur != NULL; ; 
}
