#include <stdio.h>
#include "dog.h"
/**
 * print_dog - write dog data
 * @d: struct for dog in dog.h
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing");
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	if (d->age > 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
