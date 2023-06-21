#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main func
 * @ac: args count
 * @av: args vector
* Return: 0;
*/
int main(int ac, char **av)
{
	int n1, n2, result;
	int (*p)(int, int);

	if (ac < 4 || ac > 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);

	p = get_op_func(av[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(n1, n2);

	printf("%d\n", result);
	return (0);
}
