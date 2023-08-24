#include "main.h"
/**
 * _strncat - parameter name dest and src as pointer and int n
 * @dest: char pointer
 * @src: char pointer
 * @n: int var
 * Return: 0
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *dest_end = dest;
	int i;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest_end = src[i];
		dest_end++;
	}

	*dest_end = '\0';

	return (dest);
}
