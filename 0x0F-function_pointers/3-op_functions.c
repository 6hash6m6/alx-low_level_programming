#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - ep
 * @a: int
 * @b: int
 * Return: a+b;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ep
 * @a: int
 * @b: int
 * Return: a-b;
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ep
 * @a: int
 * @b: int
 * Return: a*b;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ep
 * @a: int
 * @b: int
 * Return: a/b;
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - ep
 * @a: int
 * @b: int
 * Return: a%b;
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
