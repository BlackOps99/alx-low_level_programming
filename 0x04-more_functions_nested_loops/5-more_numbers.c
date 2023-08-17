#include "main.h"
/**
 * more_numbers - return 10 time num from 0 to 10
 *
 * Return: Always
 */
void more_numbers(void)
{
int i, x;
for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar('0' + (x / 10));
}
if (x <= 14)
{
_putchar('0' + (x % 10));
}
}
_putchar('\n');
}
}
