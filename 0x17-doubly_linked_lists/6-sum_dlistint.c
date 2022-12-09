#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data(n) of dlistint_t linked list
 * @head: head of list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
