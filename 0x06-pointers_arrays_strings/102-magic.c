#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Write your line of code here...
	 * The code below uses a pointer arithmetic trick to modify a[2] indirectly through p.
	 * It subtracts the difference between the memory location of a[2] and n from the value at p.
	 * Since a[2] is 1024 and n is uninitialized, the difference is 1024 - random_value,
	 * and subtracting that from *p changes the value stored in a[2] to 98.
	 */
	*(p + 5) = 98;

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
