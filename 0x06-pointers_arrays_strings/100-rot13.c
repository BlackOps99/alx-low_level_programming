#include "main.h"
#include <ctype.h>
/**
 * rot13 - Encode a string into 1337
 * @str: string
 * Return: the new string
 */
char *rot13(char *str)
{
	int x, y;

	char sera[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char serb[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; sera[y] != '\0'; y++)
		{
			if (str[x] == sera[y])
			{
				str[x] = serb[y];
				break;
			}
		}
	}
	return (str);
}
