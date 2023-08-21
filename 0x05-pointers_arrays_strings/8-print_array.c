#include "main.h"
#include <stdio.h>
/**
 * print_array - parameter a, n as pointer int
 * @a: int pointer.
 * @n: int pointer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i, num;

	num = n - 1;

	for (i = 0; i <= num; i++)
	{
		printf("%d", a[i]);

		if (i < num)
		{
			printf(", ");
		}
	}
	printf("\n");
}
