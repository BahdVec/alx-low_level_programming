#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s", (*d).name);
	printf("\nAge: %f", (*d).age);
	printf("\nOwner: %s", (*d).owner);
}
