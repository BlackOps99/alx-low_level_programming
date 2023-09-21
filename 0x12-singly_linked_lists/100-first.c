#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * before_main - Function to be executed before main.
 * Return: no thing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
