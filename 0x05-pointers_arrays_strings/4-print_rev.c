#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - parameter s as pointer char
 * @s: char pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int length;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
