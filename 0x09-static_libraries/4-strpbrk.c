#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search for a string of any set of bytes
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s if found and null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *curr_accept = accept;

		while (*curr_accept != '\0')
		{
			if (*s == *curr_accept)
			{
				return (s);
			}
			curr_accept++;
		}

		s++;
	}

	return (NULL);
}
