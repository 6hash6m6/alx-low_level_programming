#include "main.h"

/**
 * _strlen - returning size of str
 * @s: char
 * Return: i;
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
