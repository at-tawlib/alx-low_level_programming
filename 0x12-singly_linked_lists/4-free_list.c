#include "lists.h"

/**
 * free_list - fees a list
 * @head: head of list ot voverwi
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}

