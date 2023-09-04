#include <stdlib.h>
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
 * _strncpy - parameter name dest and src as pointer and int n
 * @dest: char pointer
 * @src: char pointer
 * @n: int var
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
/**
 * argstostr - concatenates the arguments and gives pointer
 * @ac: the argc for arguments count
 * @av: the arguments to work on it
 * Return: the pointer to a new mymystring or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int total_length = 0;
	int i;
	int current_position = 0;
	int x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += _strlen(av[i]) + 1;
		}
	}

	ptr = malloc((total_length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		if (av[x] != NULL)
		{
			_strncpy(ptr + current_position, av[x], _strlen(av[x]));
			current_position += _strlen(av[x]);
			ptr[current_position] = '\n';
			current_position++;
		}
	}

	ptr[current_position] = '\0';

	return (ptr);
}
