#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Output: if the number is positive or negative or zero
 * Return: return 0 and exit the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
