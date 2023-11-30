#include "hash_tables.h"

/**
 * createElement - fun that the element of hash table.
 * @key: the hashed key.
 * @value: the value for the element.
 * Return: the addres of new element NULL otherwise.
 */
hash_node_t *createElement(const char *key, const char *value)
{
	hash_node_t *elemnet = NULL;

	elemnet = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (elemnet == NULL)
		return (NULL);

	elemnet->key = (char *)malloc(strlen(key) + 1);
	elemnet->value = (char *)malloc(strlen(value) + 1);

	if (elemnet->key == NULL)
	{
		free(elemnet);
		return (NULL);
	}

	if (elemnet->value == NULL)
	{
		free(elemnet->key);
		free(elemnet);
		return (NULL);
	}

	strcpy(elemnet->key, key);
	strcpy(elemnet->value, value);

	elemnet->next = NULL;

	return (elemnet);
}

/**
 * hash_table_set - fun that create new item in the hash table.
 * @ht: the table that the new element will be add.
 * @key: the hashed key.
 * @value: the value for the element.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elemnet = NULL;
	unsigned long int index, i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL || key == NULL
	|| strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			strcpy(ht->array[i]->value, value);
			return (1);
		}
	}

	elemnet = createElement(key, value);
	if (elemnet == NULL)
		return (0);

	ht->array[index] = elemnet;

	return (1);
}
