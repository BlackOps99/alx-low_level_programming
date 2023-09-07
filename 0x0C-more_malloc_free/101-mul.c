#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check if digit or not
 * @c: type char
 * Return: true or false
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * print_error_and_exit - exit out
 * @void: void
 * Return: 0
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * multiply - multiply to 2 numbers
 * @num1: type char pointer
 * @num2: type char pointer
 * Return: 0
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int *result;
	int i, j, carry, product;
	int printed = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = (int *)malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		print_error_and_exit();
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i + j + 1] = carry;
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0 || printed)
		{
			printf("%d", result[i]);
			printed = 1;
		}
	}

	printf("\n");
	free(result);
}
/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int i, x;

	if (argc != 3)
	{
		print_error_and_exit();
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!is_digit(argv[1][i]))
		{
			print_error_and_exit();
		}
	}

	for (x = 0; argv[2][x] != '\0'; x++)
	{
		if (!is_digit(argv[2][x]))
		{
			print_error_and_exit();
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}
