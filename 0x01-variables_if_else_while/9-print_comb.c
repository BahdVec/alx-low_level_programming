#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nl;

	nl = 48;
	while (nl < 58)
	{
		putchar (nl);
	if (nl != 57)
	{
		putchar (',');
		putchar (' ');
	}
	if (nl == 57)
	{
		putchar('\n');
	}
		nl++;
	}
		return (0);
}
