#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to retrieve the value from it.
 * @key: the key to find value in the hash table.
 * Return: value associated with key, NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *elemnet = NULL;

	if (ht == NULL || ht->size == 0 || ht->array == NULL ||
	key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	elemnet = ht->array[index];
	while (elemnet != NULL)
	{
		if (strcmp(elemnet->key, key) == 0)
			return (elemnet->value);

		elemnet = elemnet->next;
	}

	return (NULL);
}
