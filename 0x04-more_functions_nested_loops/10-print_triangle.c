#include "main.h"
/**
 * print_triangle - print #
 *@size: variable
 * Return: Always
 */
void print_triangle(int size)
{
int m, j;
for (m = 1; m <= size; m++)
{
for (j = 1; j <= size - m; j++)
{
_putchar(' ');
}
for (j = 1; j <= m; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
