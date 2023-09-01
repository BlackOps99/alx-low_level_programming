#include <stdio.h>
/**
 * main - prints arguments that received
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
