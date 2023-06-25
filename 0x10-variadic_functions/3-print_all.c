#include "variadic_functions.h"

/**
 * print_all - prints all types
 * @format: first arg
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *str;
	char *separator = ", ";

	va_list args;

	va_start(args, format);

	while (format && format[j])
		j++;

	while (format && format[i])
	{
		if (i == j - 1)
			separator = "";

		switch (format[i])
		{
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				break;
			case 's':
				str = va_arg(args, char*);
				str ? printf("%s%s", str, separator) : str = "(nil)";
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
