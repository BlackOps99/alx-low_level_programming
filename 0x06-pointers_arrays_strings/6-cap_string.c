#include "main.h"
#include <stdbool.h>
#include <ctype.h>
/**
 * is_separator - parameter name c as char type
 * @c: type char
 * Return: true if separators found else false
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}

	return (false);
}
/**
 * cap_string - parameter name c as char poitner
 * @str: type char
 * Return: true the string
 */
char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else if (is_separator(str[i]))
		{
			new_word = true;
		}
		else
		{
			new_word = false;
		}
	}

	return (str);
}
