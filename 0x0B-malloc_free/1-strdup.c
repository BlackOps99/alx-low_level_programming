#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: type char pointer and have the string to write
 * Return: returns a pointer else NULL
 */
char *_strdup(char *str)
{
	int str_len;
	char *ptr;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);

	ptr = malloc(sizeof(char) * (str_len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < str_len; x++)
		ptr[x] = str[x];

	ptr[x] = '\0';

	return (ptr);
}
