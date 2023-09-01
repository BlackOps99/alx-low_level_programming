#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments that received
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, throw error
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);

	return (0);
}
