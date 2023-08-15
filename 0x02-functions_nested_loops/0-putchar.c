#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char outMessage[] = "_putchar\n";
	int i;

	for (i = 0; outMessage[i] != '\0'; i++)
	{
		_putchar(outMessage[i]);
	}

	return (0);
}
