#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy the string pointed to by src.
 * @dest: char pointer
 * @src: char pointer
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (originalDest);
}
