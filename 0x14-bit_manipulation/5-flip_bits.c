#include "main.h"

/**
 * flip_bits - a func that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: integer n
 * @m: integer m
 * Return: number of bits to needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned long int flip;

	result = 0;
	flip = n ^ m;
	while (flip)
	{
		result += flip & 1;
		flip = flip >> 1;
	}
	return (result);
}
