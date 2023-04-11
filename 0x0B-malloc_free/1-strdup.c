#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - ep
 * @str: char
 * Return: newStr;
 */

char *_strdup(char *str)
{
	char *newStr = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	newStr = (char *)malloc(n + 1 * sizeof(char));

	if (newStr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newStr[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	newStr[i] = '\0';
	return (newStr);
}
