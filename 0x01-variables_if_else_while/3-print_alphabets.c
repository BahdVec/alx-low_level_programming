#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
char bet;

for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
{
	putchar(alpha);
}
for (bet = 'A'; bet <= 'Z'; bet = bet + 1)
{
	putchar(bet);
}
	putchar('\n');
	return (0);
}
