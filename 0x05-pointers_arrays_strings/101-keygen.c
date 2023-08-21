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

	int i;
	char password[12];

	for (i = 0; i < 11; i++)
	{
		password[i] = (char)rand() % 94 + 33;
	}

	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
