#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *pres;
	size_t n;

	n = 0;
	pres = h;

	while (pres != NULL)
	{
		pres = pres->next;
		n++;
	}

	return (n);
}
