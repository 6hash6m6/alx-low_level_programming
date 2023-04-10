#include "main.h"

/**
 * _strstr - entry
 * @haystack: char
 * @needle: char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pH = haystack;
		char *pN = needle;

		while (*pH == * pN && *pN != '\0')
		{
			pH++;
			pN++;
		}

		if (*pN == '\0')
			return (haystack);
	}

	return (0);
}
