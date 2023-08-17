#include "main.h"
/**
 * print_square - print # to draw the square
 *@size: variable
 * Return: Always
 */
void print_square(int size)
{
if (size == 0 || size < 0)
{
_putchar('\n');
}
else
{
int i, m;
for (i = 0; i < size; i++)
{
for (m = 0; m < size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
