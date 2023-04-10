#include "main.h"

/**
 * _strcpy - cpying string point to by src
 * @dest: char
 * @src: char
 * Return: dest;
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		y++;
	}

	for ( ; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';

	return (dest);
}
