#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - ep
 * @ac: int
 * @av: char
 * Return: p;
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, ext;
	char *p = NULL;

	k = 0;
	ext = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ext++;
		}
	}
	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if(p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
