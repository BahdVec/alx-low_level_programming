#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;


printf("Size of char: %zu byte(s)\n", sizeof(a));
printf("Size of int: %zu byte(s)\n", sizeof(b));
printf("Size of long int: %zu byte(s)\n", sizeof(c));
printf("Size of long long int: %zu byte(s)\n", sizeof(d));
printf("Size of float: %zu byte(s)\n", sizeof(e));

return (0);

}
