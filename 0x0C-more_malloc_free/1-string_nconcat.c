#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ep
 * @s1: char
 * @s2: char
 * @n: uint
 * Return: x;
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, e;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (s1[j])
		j++;

	x = malloc(sizeof(*x) * j + n + 1);

	if (x == NULL)
		return (NULL);

	for (i = 0, e = 0; i < (j + n); i++)
	{
		if (i < j)
		{
			x[i] = s1[i];
		}
		else
		{
			a[i] = s2[e++];
		}
	}
	x[i] = '\0';
	return (x);
}
