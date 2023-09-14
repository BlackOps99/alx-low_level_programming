#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum from the parameters
 * @n: type unsigned int
 * Return: res or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int res = 0;

	if (n == 0)
	{
		return (0);
	}
	

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(ap, int);
	}

	va_end(ap);

	return (res);
}
