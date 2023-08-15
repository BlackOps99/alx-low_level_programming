#include "main.h"

/**
 * main - checks for lowercase character
 *
 * Description: checks for lowercase character 1 if c is lowercase, 0 otherwise
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
