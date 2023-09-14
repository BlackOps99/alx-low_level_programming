#include "3-calc.h"
/**
 * get_op_func - get the operation
 * @s: Type char str
 * Return: pointer to op_ of a and b return c or null if not operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		++i;
	}
	return (NULL);
}