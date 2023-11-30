#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table.
 * @ht: hash table to delete it
 * Return: No Thing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *element = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];
		while (element != NULL)
		{
			temp = element;
			element = element->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
