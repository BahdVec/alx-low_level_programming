#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char all;

all = 'a';

while (all <= 'z')
{
	if (all != 'q' && all != 'e')
	{
	putchar(all);
	}
	all++;
}
	putchar('\n');
	return (0);
}

