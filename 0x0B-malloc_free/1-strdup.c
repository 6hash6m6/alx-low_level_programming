#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicating the string given as param
 * @str: the string to duplicate
 * Return: newStr;
 */

char *_strdup(char *str)
{
	unsigned int i, n = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	newStr = malloc(sizeof(char) * (i + 1));

	for (n = 0; n < i; n++)
	{
		newStr[n] = str[n];
	}


	if (newStr == NULL)
		return (NULL);

	return (newStr);
}
