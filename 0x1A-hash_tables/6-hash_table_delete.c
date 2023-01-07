#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to deletes
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *hash_node, *next_hash_node;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			hash_node = ht->array[index];
			while (hash_node != NULL)
			{
				next_hash_node = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = next_hash_node;
			}
		}
	}
	free(head->array);
	free(head);
}
