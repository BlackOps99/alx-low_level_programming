#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * is_palindrome_recursive - function that returns 1 if a palindrome else 0
 * @s: type char pointer
 * @start: type int
 * @end: type int
 * Return: 1 if is palindrome else 0
 */
bool is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (true);
	}

	if (s[start] != s[end])
	{
		return (false);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - function that returns 1 if a palindrome else 0
 * @s: type char pointer
 * Return: 1 if is palindrome else 0
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length == 0)
	{
		return (1);
	}

	return (is_palindrome_recursive(s, 0, length - 1) ? 1 : 0);
}
