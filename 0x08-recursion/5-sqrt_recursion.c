#include "main.h"

int nat_sqrt(int n, int i);

/**
 * _sqrt_recursion - square root
 * @n: n
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (nat_sqrt(n, 1));
}

/**
 * nat_sqrt - recursing to find natural one
 * @n: n
 * @i: i
 * Return: nat_sqrt
 */

int nat_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (nat_sqrt(n, i + 1));
}
