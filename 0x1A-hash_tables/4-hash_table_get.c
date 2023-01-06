#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key of value to be retrieved
 *
 * Return: retrieved value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	hash_node = ht->array[index];
	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;

	return ((hash_node == NULL) ? NULL : hash_node->value);
}
