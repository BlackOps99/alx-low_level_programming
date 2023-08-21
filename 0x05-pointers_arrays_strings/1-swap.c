#include "main.h"
#include <stdio.h>
/**
 * swap_int - parameter n and b as pointer int
 * @a: int pointer
 * @b: int pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
