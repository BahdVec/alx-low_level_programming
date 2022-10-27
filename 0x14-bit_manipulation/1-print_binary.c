#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int j, i;
	unsigned long int y;

	j = 0;
	for (i = 63; i >= 0; i--)
	{
		y = (n >> i) & 1;
		if (y == 1)
			j = 1;
		if (j == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
