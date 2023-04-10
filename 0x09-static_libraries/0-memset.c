#include "main.h"

/**
 * _memset - filling memory with specific value;
 * @s: char
 * @b: char
 * @n: uint
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	
	return (s);
}
