#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * wildcmp_recursive - compares two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * @i: type int
 * @j: type int
 * Return: 1 or 0
 */
bool wildcmp_recursive(char *s1, char *s2, int i, int j)
{
	int k;
	int len;

	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (true);
	}

	if (s2[j] == '*')
	{
		len = strlen(s1);

		for (k = i; k <= len; k++)
		{
			if (wildcmp_recursive(s1, s2, k, j + 1))
			{
				return (true);
			}
		}
	}

	if (s1[i] == s2[j] || s2[j] == '?')
	{
		return (wildcmp_recursive(s1, s2, i + 1, j + 1));
	}

	return (false);
}
/**
 * wildcmp - compares two strings 1 if strings can considered identical else 0
 * @s1: type char pointer
 * @s2: type char pointer
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2, 0, 0) ? 1 : 0);
}
