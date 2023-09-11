#include "dog.h"
#include <stdlib.h>
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
 * new_dog - create new dog
 * @name: type char pointer
 * @age: type float
 * @owner: type char pointer
 * Return: new struct dog else null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *createdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	createdog = malloc(sizeof(dog_t));
	if (createdog == NULL)
	{
		free(createdog);
		return (NULL);
	}
	createdog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (createdog->name == NULL)
	{
		free(createdog);
		return (NULL);
	}
	createdog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (createdog->owner == NULL)
	{
		free(createdog->name);
		free(createdog);
		return (NULL);
	}
	createdog->name = _strncpy(createdog->name, name, _strlen(name));
	createdog->age = age;
	createdog->owner = _strncpy(createdog->owner, owner, _strlen(name));
	return (createdog);
}
