#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of list
 * Return: reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *cur_node;

	if (*head == NULL)
		return (NULL);
	prev_node = NULL;
	while (*head != NULL)
	{
		cur_node = *head;
		*head = (*head)->next;
		cur_node->next = prev_node;
		prev_node = cur_node;
	}
	*head = cur_node;
	return (*head);
}
