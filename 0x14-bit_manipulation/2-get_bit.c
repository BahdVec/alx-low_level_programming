#include "main.h"

/**
 * get_bit - a func that the value of a bit at any given index
 * @n: an integer
 * @index: given index
 * Return: the value at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
