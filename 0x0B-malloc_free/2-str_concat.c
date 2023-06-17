#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenating two strings
 * @s1: first str arg
 * @s2: second str arg to be appended
 * Return: strConc;
 */

char *str_concat(char *s1, char *s2)
{

	int i, n, len1 = 0, len2 = 0;
	char *strConc;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	strConc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (strConc == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		strConc[i] = s1[i];

	for (n = 0; n < len2; n++)
		strConc[i + n] = s2[n];

	return (strConc);

}
