include "main.h"

int t_prime(int n, int i);

/**
 * is_prime_number - integer is a prime num or not
 * @n: num to evaluate
 * Return: ? 1 : 0
 */

int is_prime_numner(int n)
{
	if (n <= 1)
		return (0);
	return (t_prime(n, n - 1));
}

/**
 * t_prime - calc num is R
 * @n: n
 * @i: i
 * Return: ? 1 : 0
 */

int t_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (t_prime(n, i - 1));
}