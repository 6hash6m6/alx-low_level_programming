#include "main.h"

/**
 * _puts - printing str with newline
 * @str: char
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
