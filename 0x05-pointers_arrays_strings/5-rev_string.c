#include "main.h"
#include <string.h>
/**
 * rev_string - parameter s as pointer char
 * @s: char pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	char le;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		le = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = le;
	}
}
