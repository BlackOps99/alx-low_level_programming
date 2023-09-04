#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: type int and have the size of array
 * @c: type char
 * Return: pointer to the array else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
