#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 * @head: head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp_node;

	if (*head == NULL)
		return (0);
	temp_node = *head;
	n = temp_node->n;
	*head = temp_node->next;
	free(temp_node);
	return (n);
}
