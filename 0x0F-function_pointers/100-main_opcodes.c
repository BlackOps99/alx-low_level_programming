#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the opcode of it own function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Exit 1 if one arg is not correct, 2 if byte is negative.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
