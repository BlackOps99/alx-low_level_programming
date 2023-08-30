#include "main.h"
/**
 * is_prime_recursive - if 1 the input int is a prime number else return 0
 * @n: type int
 * @divisor: type int
 * Return: 1 if input is int else 0
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, divisor - 1));
	}
}
/**
 * is_prime_number - function that returns the natural sqr root number.
 * @n: type int
 * Return: 1 if input is integer otherwise is 0
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
