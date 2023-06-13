#include <stdio.h>
#include <stdlib.h>


/**
 * main - starting point
 * @argc: args count
 * @argv: array of string
 * Return: 0;
 */

int main(int argc, char **argv)
{

	int sum;

	if (argc != 3)
	{
		printf("Error\n");
	}

	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (0);
}
