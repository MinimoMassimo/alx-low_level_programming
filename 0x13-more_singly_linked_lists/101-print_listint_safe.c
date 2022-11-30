#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the linked list
 * @head: the head of the list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_t *temp;

	if (head == NULL)
		exit(98);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		exit(98);
	temp->n = head->n;
	temp->next = head->next;

	for (; temp != NULL; n++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (n);
}
