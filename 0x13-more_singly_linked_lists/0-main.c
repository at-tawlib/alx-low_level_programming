#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n, m;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;

	/** test for 0-print_listint.c */
	n = print_listint(head);
	printf("-> %lu elements\n", n);

	/** test for 1-listint_len.c */
	m = listint_len(head);
	printf("-> %lu elements\n", m);

	free(new);
	return (0);
}
