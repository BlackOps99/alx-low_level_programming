#include <stdio.h>
#include "dog.h"
/**
 * init_dog - load variable of type struct dog
 * @d: struct for dog in dog.h
 * @name: type char pointer
 * @age: type float
 * @owner: type char pointer
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
