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
	printf("Age: %s\n", (d->age > 0) ? printf("%.6f", d->age) : "(nil)");
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
