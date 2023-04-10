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
	int i, cents = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	i = atoi(argv[1]);
	while (i >= 25)
	{
		i -= 25;
		cents++;
	}
	while (i >= 10)
	{
		i -= 10;
		cents++;
	}
	while (i >= 5)
	{
		i -= 5;
		cents++;
	}
	while (i >= 2)
	{
		i -= 2;
		cents++;
	}
	if (i == 1)
		cents++;
	printf("%d\n", coins);

	return (0);
}
