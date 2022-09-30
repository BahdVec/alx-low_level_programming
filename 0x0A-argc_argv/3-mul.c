#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	(void) argc;
	int result = 1, i;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			result = result * x;
		}
		printf("%d\n", result);
		return (0);
	}
	return (1);
}
