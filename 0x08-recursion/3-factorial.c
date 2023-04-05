#include "main.h"

/**
 * factorial - return the factoria of a number
 * @n: number to return the factorial from
 * return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n ==0)
		return (1);
	return (n * factorial(n -1));
}