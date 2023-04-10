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
	int i, res, s = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			find_letter = argv[i];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			res = atoi(argv[i]);
			s += res;
		}
		printf("%d\n", s);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

