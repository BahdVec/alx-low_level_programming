#include "main.h"
#include <stdio.h>

/**
 * main - printing number of argument passed
 * @argc: argument count
 * @argv: argument count
 * Return: Alway 0
 *
 */
void main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
}