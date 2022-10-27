#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: an integer
 * @index: index
 * Return: int 1 for success, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	set = 1;
	*n = *n | (set << index);

	return (1);
}
