#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hx;
	char hxx;

	for (hx = 48; hx < 58; hx++)
	{
		putchar(hx);
	}
	for (hxx = 'a'; hxx <= 'f' ; hxx++)
	{
		putchar(hxx);
	}
		putchar('\n');
		return (0);
}
