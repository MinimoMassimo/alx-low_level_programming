#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with element or NULL if key cannot be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr = NULL;

	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);
	if (ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	if (curr == NULL)
		return (NULL);
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
