#include <stdio.h>
#include "dog.h"
/**
 * print_dog - write dog data
 * @d: struct for dog in dog.h
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)");
		printf("Age: %f\n", d->age);
		d->owner != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)");
	}
	else
	{
		printf("NULL\n");
	}
}
