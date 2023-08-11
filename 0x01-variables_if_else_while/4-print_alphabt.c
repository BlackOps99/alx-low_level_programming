#include <stdio.h>

/**
 * main - output the alphabet without q and e
 * Return: return 0 and exit the program
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}

	putchar('\n');
	return (0);
}
