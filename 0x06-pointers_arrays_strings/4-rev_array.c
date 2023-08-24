#include "main.h"
/**
 * reverse_array - parameter name a as pointer and n as int
 * @a: char pointer
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
