#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: type char pointer
 * @accept: bytes from accept
 * Return: return length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int currentIndex, acceptIndex, found;

	currentIndex = 0;
	while (s[currentIndex] != '\0')
	{
		found = 0;
		for (acceptIndex = 0; accept[acceptIndex] != '\0'; acceptIndex++)
		{
			if (s[currentIndex] == accept[acceptIndex])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}

		length++;
		currentIndex++;
	}

	return (length);
}
