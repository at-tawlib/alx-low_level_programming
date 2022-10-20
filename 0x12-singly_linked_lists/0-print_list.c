#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: list to print
 */
void print_list(const list_t *h)
{
	while (h != NULL)
	{
			printf("%s", h->str);
			h = h->next;
	}
}
