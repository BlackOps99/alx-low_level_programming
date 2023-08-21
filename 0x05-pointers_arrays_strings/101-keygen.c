#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	srand(time(NULL));

	char password[12];

	for (int i = 0; i < 11; i++)
	{
		int randomChar = rand() % 94 + 33;
		password[i] = (char)randomChar;
	}

	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
