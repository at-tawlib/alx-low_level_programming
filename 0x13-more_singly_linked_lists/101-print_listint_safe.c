#include "lists.h"
/**
 * print_listint_safe - prints linked list (safe version)
 * @head: head of list
 * Return: number of nodes in list
 *
 * Description - checks if mem addresses are sequential to each other
 * i.e. if diff > 0, mem addresses not close has diff as garbage value
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int diff;

	while (head)
	{
		/** check diff of mem addresses */
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *) head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			/** prints address and data of next node */
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
