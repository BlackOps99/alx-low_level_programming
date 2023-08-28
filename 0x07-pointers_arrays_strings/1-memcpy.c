#include "main.h"
/**
 * _memcpy - method that copies memory to area
 * @dest: char pointer
 * @src: char memory area
 * @n: char bytes from src to dest
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
