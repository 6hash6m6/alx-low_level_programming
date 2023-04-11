#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - ep
 * @s1: char
 * @s2: char
 * Return: newStr;
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr = NULL;
	unsigned int i;
	int n1, n2, count;

	count = 0;
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	newStr = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		newStr[i] = s1[i];

	for (; s2[count] != '\0'; i++)
	{
		newStr[i] = s2[count];
		count++;
	}

	return (newStr);
}
