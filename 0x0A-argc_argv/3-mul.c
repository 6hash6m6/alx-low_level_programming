#include <stdio.h>
#include <stdlib.h>

/**
 * main - main func
 * @argc: int
 * @argv: char
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int m = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", m);
	return (0);
}
