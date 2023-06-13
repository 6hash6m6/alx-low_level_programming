#include <stdio.h>

/**
 * main - starting point
 * @argc - args count
 * @argv - array of string args
 * Return: 0;
 */

int main(int argc, char **argv)
{

	int i = 0;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
