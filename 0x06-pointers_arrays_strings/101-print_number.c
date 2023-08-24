#include "main.h"
/**
 * print_number - par name n int
 * @n: int
 * Return: 0
 */
void print_number(int n)
{
	int power = 1;
	int neg = 0;
	int digit;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}

	temp = n;

	while (temp > 9 || temp < -9)
	{
		power *= 10;
		temp /= 10;
	}

	while (power > 0)
	{
		digit = (neg) ? (n / power % 10) * -1 : n / power % 10;
		_putchar(digit + '0');
		power /= 10;
	}
}
