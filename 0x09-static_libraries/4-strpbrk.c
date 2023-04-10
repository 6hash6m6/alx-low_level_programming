#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: char
 * @accept: char
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}

	return ('\0');
}
