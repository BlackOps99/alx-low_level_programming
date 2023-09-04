#include "main.h"
#include <stdlib.h>
/**
 * _strlen - parameter s as pointer char
 * @s: char pointer
 * Return: len of char
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
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

	len = _strlen(dest);

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, len++)
	{
		dest[len] = src[b];
	}
	return (dest);
}
/**
 * str_concat - function that concatenates two strings
 * @s1: type char pointer contents the first string
 * @s2: type char pointer contents the second string
 * Return: failure => null else the string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len_s1, len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	_strncat(ptr, s1, len_s1);

	_strncat(ptr, s2, len_s2);

	return (ptr);
}
