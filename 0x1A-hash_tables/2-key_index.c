#include "hash_tables.h"
/**
 * key_index - fun that return the index of the key
 * @key: hash key by 1-djb2
 * @size: size of the hash table
 * Return: the index that where the key will be in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
