#include "main.h"
#include <stdlib.h>
/**
* arrayange - function that creates an array of integers
* @mi first and minimum value of the array to be created
* @max: last mum value of the array to be created
* Return:nter to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int *ptr;
	int num, n;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (num = 0; num < n; num++)
		ptr[num] = min + num;

	return (ptr);
}
