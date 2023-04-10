#include "main.h"

/**
 * _strspn - getting length of sub prefix
 * @s: char
 * @accept: char
 * Return: a;
 */

unsigned int _strspn (char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;

			j++;
		}
		j++;
		
		j = 0;
	}

	return (a);
}
