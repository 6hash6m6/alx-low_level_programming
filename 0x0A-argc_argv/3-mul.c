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

	int i, sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
