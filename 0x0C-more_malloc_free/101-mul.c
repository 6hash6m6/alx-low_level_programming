#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_length(char *str);
char *dec_arr(int size);
char *iterator(char *str);
void get_prod(char *prod, char *m, int digit, int zeroes);
void add_nums(char *last_prod, char *next_prod, int next_length);

/**
 * find_length - ep
 * @str: char
 * Return: length;
 */

int find_length(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * dec_arr - ep
 * @size: int
 * Return: arr;
 */

char *dec_arr(int size)
{
	char *arr;
	int index;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		arr[index] = 'x';

	arr[index] = '\0';

	return (arr);
}

/**
 * iterator - ep
 * @str: char
 * Return: str;
 */

char *iterator(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - ep
 * @c: char
 * Return: digit;
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - ep
 * @prod: char
 * @m: char
 * @digit: int
 * @zeroes: int
 */

void get_prod(char *prod, char *m, int digit, int zeroes)
{
	int m_len, num, tens = 0;

	m_len = find_length(m) - 1;
	m += m_len;

	while (*prod)
	{
i		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; m_len >= 0; m_len--, m--, prod--)
	{
		if (*m < '0' || *m > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*m - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - ep
 * @last_prod: char
 * @next_prod: char
 * @next_length: int
 */

void add_nums(char *last_prod, char *next_prod, int next_length)
{
	int num, tens = 0;

	while (*(last_prod + 1))
		last_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *last_prod != 'x'; last_prod--)
	{
		num = (*last_prod - '0') + (*next_prod - '0');
		num += tens;
		*last_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_length--;
	}

	for (; next_length >= 0 && *next_prod != 'x'; next_length--)
	{
		num = (*next_prod - '0');
		num += tens;
		*last_prod = (num % 10) + '0';
		tens = num / 10;

		last_prod--;
		next_prod--;
	}

	if (tens)
		*last_prod = (tens % 10) + '0';
}

/**
 * main - main func
 * @argc: int
 * @argv: pcharArr
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	char *last_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterator(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterator(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_length(argv[1]) + find_length(argv[2]);
	last_prod = dec_arr(size + 1);
	next_prod = dec_arr(size + 1);

	for (index = find_length(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(last_prod, next_prod, size - 1);
	}
	for (index = 0; last_prod[index]; index++)
	{
		if (last_prod[index] != 'x')
			putchar(last_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(last_prod);

	return (0);
}
