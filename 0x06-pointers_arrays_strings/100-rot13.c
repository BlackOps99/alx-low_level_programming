#include "main.h"
#include <ctype.h>
/**
 * rot13 - Encode a string into 1337
 * @str: string
 * Return: the new string
 */
char *rot13(char *str)
{
	int i;
	char base;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			base = (islower(str[i])) ? 'a' : 'A';
			str[i] = (str[i] - base + 13) % 26 + base;
		}
	}

	return (str);
}
