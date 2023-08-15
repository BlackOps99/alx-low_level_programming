#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;
	size_t length = strlen(message);

	for (i = 0; i < length; i++)
	{
		_putchar(message[i]);
	}

	return (0);
}
