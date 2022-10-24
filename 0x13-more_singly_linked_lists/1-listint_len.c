#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
