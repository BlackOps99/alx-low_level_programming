#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
 * string_nconcat - function that concatenates two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * @n: type unsigned int
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len;
	unsigned int endlen;
	unsigned int i;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = (unsigned int)_strlen(s1);

	endlen = sizeof(char) * (s1_len + n + 1);

	ptr = malloc(endlen);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}

	for (x = 0; x < n && s2[x] != '\0'; x++)
	{
		ptr[s1_len + x] = s2[x];
	}

	ptr[endlen] = '\0';

	return (ptr);
}
