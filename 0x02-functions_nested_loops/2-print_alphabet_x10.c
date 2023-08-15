#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 * Description: Prints alphabet 10 time
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
}
