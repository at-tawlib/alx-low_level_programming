#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
