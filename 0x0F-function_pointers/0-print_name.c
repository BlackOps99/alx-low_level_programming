#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: type char string pointer
 * @f: type pointer func and char as arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	
	f(name);
}
