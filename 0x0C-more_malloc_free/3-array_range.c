#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates array of integers
 * @min: the smallest value of the range to be included
 * @max: the larges
 * Return: pointer to array containing all values from min to max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = 0;
	for (i = min; i <= max; i++)
		size++;;
	ptr = malloc(i * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
