#include "main.h"

/**
 * _isalpha - shows alpha
 * @c: int
 * Return ? 1 : 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\0');
}
