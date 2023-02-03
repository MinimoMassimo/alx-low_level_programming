#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr;


	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		curr = ht->array[idx];
		while (curr)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			if (curr->next == NULL)
				break;
			printf(", ");
			curr = curr->next;
		}
	}
	printf("}\n");

}
