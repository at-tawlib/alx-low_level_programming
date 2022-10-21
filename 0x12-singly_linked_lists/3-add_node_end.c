#include "lists.h"
/**
 * add_node_end - adds new node at the end of list
 * @head: head of list
 * @str: string to assign to new node
 * Return: address of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *last_node;
	list_t *new_node = malloc(sizeof(struct list_s));

	if (new_node == NULL)
		return (NULL);

	/** getting length of string */
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	/** if head is null, set head to new_list */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	/** traverse to last element before appending this */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (*head);
}
