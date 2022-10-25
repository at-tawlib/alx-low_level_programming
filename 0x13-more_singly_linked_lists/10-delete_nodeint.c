#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of list
 * @index: index to delete
 * Return: 1 if successfull and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur_node, *prev_node;

	if (*head == NULL)
		return (-1);

	cur_node = *head;
	prev_node = *head;

	/** if deleting first node (index = 0) */
	if (index == 0)
	{
		*head = cur_node->next;
		free(cur_node);
		return (1);
	}
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			prev_node->next = cur_node->next;
			free(cur_node);
			return (1);
		}

		prev_node = cur_node;
		if (prev_node == NULL)
			return (-1);
		cur_node = cur_node->next;
	}
	return (-1);
}
