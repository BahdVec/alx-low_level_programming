#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0, return 0, otherwise sum all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0, x;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, unsigned int);
			sum = sum + x;
		}
	}
	va_end(args);

	return (sum);
}
