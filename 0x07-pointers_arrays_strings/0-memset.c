#include "main.h"
/**
 * _memset - method that fills memory with a constant byte
 * @s: type char pointer
 * @b: type char pointer
 * @n: type char bytes of mem pointed by s with constant byte b
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
