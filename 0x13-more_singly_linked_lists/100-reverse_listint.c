#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: the head of the list
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nuovo = *head;
	listint_t *temp = (**head).next;

	nuovo->next = NULL;
	while (temp != NULL)
	{
		nuovo->next = nuovo;
		nuovo->n = temp->n;
		temp = temp->next;
	}
	return (nuovo);
}
