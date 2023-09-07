#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: null when faild
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *array;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
	{
		return (ptr);
	}

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	array = (char *)ptr;

	for (x = 0; x < (nmemb * size); x++)
	{
		*(array + x) = 0;
	}

	return (array);
}
