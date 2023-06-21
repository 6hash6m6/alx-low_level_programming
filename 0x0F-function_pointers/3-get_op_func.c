#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - getting the operator
 * @s: is the operator
 * Return: NULL if s does not match any of 5 expected values
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, operators[i].op) == 0)
			return (*(operators[i].f));

		i++;
	}

	return (NULL);
}
