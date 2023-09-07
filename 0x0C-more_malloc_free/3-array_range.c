#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - unction that creates an array of integers
 * @min: type int
 * @max: type int
 * Return: null when fail
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		*(ptr + i) = min;
	}

	return (ptr);
}
