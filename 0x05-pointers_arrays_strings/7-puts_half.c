#include "main.h"
#include <string.h>
/**
 * puts_half - parameter str as pointer char
 * @str: char pointer
 * Return: 0
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = strlen(str);

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
