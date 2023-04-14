#include "main.h"
#include <stdlib.h>
/*
* med - allocates memory using malloc
*ize of memory to be allocated
* Return: poiner to allocated memory on success
* emory
*/
void *malloc_checked(unsigned int b)
{
	char *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (pntr);
}
