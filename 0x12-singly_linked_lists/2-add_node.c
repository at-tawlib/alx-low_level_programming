#include "lists.h"

/**
 * add_node - adds new node at the beginning of list
 * @head: head of list
 * @str: string to assign
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_list = malloc(sizeof(struct list_s));

	if (new_list == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_list->len = i;
	new_list->str = strdup(str);

	new_list->next = *head;
	*head = new_list;

	return (*head);
}
