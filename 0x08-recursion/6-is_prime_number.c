#include "main.h"

int temp_prime(int n, int i);

/**
 * is_prime_number - integer is a prime num or not
 * @n: num to evaluate
 * Return: ? 1 : 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (temp_prime(n, n - 1));
}

/**
 * temp_prime - calc num is R
 * @n: n
 * @i: i
 * Return: ? 1 : 0
 */

int temp_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (temp_prime(n, i - 1));
}
