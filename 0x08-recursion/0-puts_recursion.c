#include "main.h"

/**
 * _puts_recursion - putchar string function
 * @s: charater value
 * Return: Always 0
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
