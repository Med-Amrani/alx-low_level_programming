#include <stdlib.h>
#include "lists.h"

/**
 *  returns the number of elements in a linked list 0
 * @h: pointer to the list_t list list .
 *
 * Return: number of elements in k
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (k)
	{
		m++;
		k = k->next;
	}
	return (m);
}
