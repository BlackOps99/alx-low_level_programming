#include "main.h"
/**
 * print_most_numbers - return num without 2,4
 *
 * Return: Always
 */
void print_most_numbers(void)
{
int m;
for (m = 0; m <= 9; m++)
{
if (m == 2 || m == 4)
{
continue;
}
_putchar('0' + m);
}
_putchar('\n');
}
