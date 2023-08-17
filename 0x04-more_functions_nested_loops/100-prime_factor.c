#include <stdio.h>
/**
 * main - Entery Point
 * description: numbersfactor
 * Return: 0
 */
int main(void)
{
long int n = 612852475143;
long int factors = -1;
long int i;
while (n % 2 == 0)
{
factors = 2;
n /= 2;
}
for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
factors = i;
n /= i;
}
}
if (n > 2)
{
factors = n;
}
printf("%ld\n", factors);
return (0);
}
