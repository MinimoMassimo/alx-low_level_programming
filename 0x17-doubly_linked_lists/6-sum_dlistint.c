#include "lists.h"

/**
 * sum_dlistint - sums all of the data in a list
 * @head: pointer to head of list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
