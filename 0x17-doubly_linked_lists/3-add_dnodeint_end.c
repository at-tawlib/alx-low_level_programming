#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of list
 * @n: data to add
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/** if list is empty, make the  new node head */
	if (last == NULL)
	{
		new->prev = last;
		(*head) = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		new->prev = last;
	}
	return (new);
}
