#include <stdio.h>

/**
 * main - output all numbers from 0 to 9
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
