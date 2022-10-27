#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index or position to insert
 * @n: integer value to add
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *cur_node, *prev_node;

	/** if no element in list and idx > 0 */
	if (*head == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/** if node is added at the beginning (0 index) **/
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cur_node = *head;
	prev_node = *head;
	/** traverse to position */
	for (i = 0; i <= idx && prev_node != NULL; ++i)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = cur_node;
			prev_node->next = new_node;
			return (new_node);
		}

		prev_node = cur_node;
		cur_node = cur_node->next;
	}
	return (NULL);
}
