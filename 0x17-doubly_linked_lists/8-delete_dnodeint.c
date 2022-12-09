#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list node
 * @index: index of the node to be deleted
 * Return: 1 for successful and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node1, *node2;

	node1 = *head;
	if (node1 != NULL)
	{
		while (node1->prev != NULL)
			node1 = node1->prev;
	}

	while (node1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				node2->next = node1->next;
				if (node1->next != NULL)
					node1->next->prev = node2;
			}
			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		i++;
	}
	return (-1);
}
