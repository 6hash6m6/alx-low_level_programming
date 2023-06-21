#include<stdio.h>
#include<stdlib.h>

/**
 * main - main func
 *@ac: args count
 *@av: args vector
* Return: 0;
*/

int main(int ac, char **av)
{
	int i, j;


	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(av[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < j - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
