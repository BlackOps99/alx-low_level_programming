#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * wildcmp - compares two strings 1 if strings can considered identical else 0
 * @s1: type char pointer
 * @s2: type char pointer
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
