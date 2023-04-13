#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - ep
 * @s: char
 * Return: 0;
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _memset - ep
 * @s: char
 * @b: char
 * @n: int
 * Return: p;
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}

/**
 * _calloc - ep
 * @nmemb: uint
 * @size: uint
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}

/**
 *_puts - ep
 * @str: char
 * Return: void;
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * strNumbers - ep
 * @str: char
 * Return: ? 1 : 0
 */

int strNumbers(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - ep
 * @n1: char
 * @n2: char
 * Return: ptr;
 */

void multiply(char *n1, char *n2)
{
	int idx, n1n, n2n, res, tmp, total;
	int n1l = _strlen(n1);
	int n2l = _strlen(n2);

	int *ptr;

	tmp = n2l;
	total = n1l + n2l;
	ptr = _calloc(total, sizeof(int));
	for (n1l--; n1l >= 0; n1l--)
	{
		n1n = n1[n1l] - '0';
		res = 0;
		n2l = tmp;
		for (n2l--; n2l >= 0; n2l--)
		{
			n2n = n2[n2l] - '0';
			res += ptr[n1l + n2l + 1] + (n1n * n2n);
			ptr[n1l + n2l + 1] = res % 10;
			res /= 10;
		}
		if (res)
		{
			ptr[n1l + n2l + 1] = res % 10;
		}
	}
	res = 0;
	for (idx = 0; idx < total; idx++)
	{
		if (ptr[idx] == 0 && res == 1)
			putchar(ptr[idx] + '0');
		else if (ptr[idx] > 0)
		{
			putchar(ptr[idx] + '0');
			res = 1;
		}
	}
	putchar('\n');
	free(ptr);
}

/**
 * main - main func
 * @argc: int
 * @argv: char
 * Return: 0;
 */

int main(int argc, char **argv)
{
	char *nb1 = argv[1];
	char *nb2 = argv[2];

	if (argc != 3 || !strNumbers(nb1) || !strNumbers(nb2))
	{
		_puts("Error");
		exit(98);
	}
	if (*nb1 == '0' || *nb2 == '0')
		_puts("0");
	else
	{
		multiply(nb1, nb2);
	}
	return (0);
}
