#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argtostr - concatenating all args of the program
 * @ac: args count
 * @av: args vector
 * @Return: concat;
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, curr = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	concat = malloc(len + ac + 1 * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[curr] = av[i][j];
			curr++;
		}
		concat[curr] = '\n';
		curr++;
	}

	concat[curr] = '\0';
	return (concat);
	
}
