#include "main.h"
/**
 * print_diagonal - return n of 32 ACI
 *  *@n: variable
 * Return: Always
 */
void print_diagonal(int n)
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
int m, y;
for (m = 0; m < n; m++)
{
for (y = 0; y < m; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
