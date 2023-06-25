#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by separator and new line at the end
 * @separator: ", "
 * @n: first arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);

		if (!str)
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
