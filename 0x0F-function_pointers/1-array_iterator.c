#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: The array that own the data
 * @size: size of the array
 * @action: is a pointer to the function that will ivoke
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
