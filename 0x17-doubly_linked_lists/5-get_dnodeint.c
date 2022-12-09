#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth of a dlistint_t linked list
 * @head: head of list
 * @index: index of node to return
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	node = head;
	while (node->next != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
