#include "main.h"

/**
 * _strchr - searches for the occurrence of char and returns the s
 * @s: string
 * @c: character of string
 * Return: Always 0
 *
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (0);
		}
	}
}
