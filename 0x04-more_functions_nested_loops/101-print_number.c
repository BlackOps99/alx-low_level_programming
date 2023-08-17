#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int divisor = 1;
int digit, is_negative = 0;
if (n < 0)
{
is_negative = 1;
n = -n;
}
while (n / divisor > 9)
{
divisor *= 10;
}
if (is_negative)
{
_putchar('-');
}
while (divisor > 0)
{
digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}
}
