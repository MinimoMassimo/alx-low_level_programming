#include "lists.h"

/**
 * sum_listint - sums all of the data in a list
 * @head: pointer to head of list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cur = head;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
