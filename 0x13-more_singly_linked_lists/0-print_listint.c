#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: list
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
