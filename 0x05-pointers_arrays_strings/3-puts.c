#include "main.h"
#include <stdio.h>
/**
 * _puts - parameter str as pointer char
 * @str: char pointer
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
