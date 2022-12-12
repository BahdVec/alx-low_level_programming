#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest.
 * @dest:  destination varialbe
 * @src: source variable
 * Return: Always 0
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
