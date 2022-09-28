#include "main.h"

int finding_the_value(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (finding_the_value(n, 0));
	}
}

/**
 * finding_the_value - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator: set to 0
 *
 * Return: the resulting square root
*/
int finding_the_value(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (finding_the_value(n, i + 1));
	}
}
