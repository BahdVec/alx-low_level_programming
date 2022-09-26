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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + 1);
		}
	}

	if (c != s[i])
	{
		return (NULL);
	}
}
