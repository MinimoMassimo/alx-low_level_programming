#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: the table we want to add or update the key/value to
 * @key: the key to be added
 * @value: the value tied to the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int table_size;
	hash_node_t *curr = NULL;
	hash_node_t *new;

	if (strcmp(key, "") == 0)
		return (0);
	if (ht == NULL)
		return (0);
	table_size = ht->size;
	idx = key_index((unsigned char *)key, table_size);
	curr = ht->array[idx];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			curr->value = (char *)value;
			return (1);
		}
		curr = curr->next;
	}

	/* If no collusion, new node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = curr;
	ht->array[idx] = new;

	return (1);
}
