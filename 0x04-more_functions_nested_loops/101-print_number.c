#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
unsigned int integer = n;
if (n < 0)
{
integer = -n;
_putchar('-');
}
else
{
integer = n;
}
if (integer / 10)
{
print_number(integer / 10);
}
_putchar((integer % 10) + '0');
}
