#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print out the sum of the two digonal of a square.
 * @a: type char string
 * @size: type int
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
