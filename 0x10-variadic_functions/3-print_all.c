#include "variadic_functions.h"
/**
 * print_all - function that prints all
 * @format: the arguments that passed to the function
 * Return: 0
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int els = 0;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			els = 1;
			break;
		}

		if (els == 0)
			separator = ", ";
		i++;
		if (format[i] == '\0')
			break;
	}
	va_end(args);
	printf("\n");
}
