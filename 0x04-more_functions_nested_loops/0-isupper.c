#include "main.h"
/**
 * _isupper - checks the uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if the c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
