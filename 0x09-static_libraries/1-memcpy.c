#include "main.h"

/**
 * _memcpy - copying memory address
 * @dest: char
 * @src: char
 * @n: uint
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
