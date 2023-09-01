#include "main.h"
#include <string.h>
/**
 * _strncat - parameter name dest and src as pointer and int n
 * @dest: char pointer
 * @src: char pointer
 * @n: int var
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, b;

	len = strlen(dest);

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, len++)
	{
		dest[len] = src[b];
	}
	return (dest);
}
