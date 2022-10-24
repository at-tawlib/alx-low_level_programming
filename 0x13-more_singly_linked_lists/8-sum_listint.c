#include "lists.h"

/**
 * sum_listint - sums all elements
 * @head: head of list
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
