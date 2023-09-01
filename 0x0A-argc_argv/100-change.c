#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error else 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5 && cents > 0; i++)
		{
			coins += cents / coin_values[i];
			cents %= coin_values[i];
		}

		printf("%d\n", coins);
	}

	return (0);
}
