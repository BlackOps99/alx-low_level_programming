#include "main.h"
#include <stdbool.h>
#include <ctype.h>
/**
 * is_leet_char - parameter name c as char type
 * @c: type char
 * Return: true if leet_chars found else false
 */
bool is_leet_char(char c)
{
	char leet_chars[] = "aAeEoOtTlL";
	int i;

	for (i = 0; leet_chars[i] != '\0'; i++)
	{
		if (c == leet_chars[i])
		{
			return (true);
		}
	}

	return (false);
}
/**
 * leet - parameter name str as char poitner
 * @str: type char poitner
 * Return: true the new string
 */
char *leet(char *str)
{
	char leet_replacements[] = "4437101";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (str[i] == "aAeEoOtTlL"[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
