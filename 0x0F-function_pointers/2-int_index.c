#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @cmp: Type pointer that own the function compare values
 * Return: return -1 if size <=0 or elem no matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || cmp == NULL || size < 1)
	{
		return (-1);
	}

	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]) != 0)
		{
			return (y);
		}
	}

	return (-1);
}
