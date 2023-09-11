#include "dog.h"
#include <stdlib.h>
/**
 * _strncpy - parameter name dest and src as pointer and int n
 * @dest: char pointer
 * @src: char pointer
 * Return: 0
 */
char *_strncpy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}
/**
 * _strlen - parameter s as pointer char
 * @s: char pointer
 * Return: len of char
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
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
	createdog->name = _strncpy(createdog->name, name);
	createdog->age = age;
	createdog->owner = _strncpy(createdog->owner, owner);
	return (createdog);
}
