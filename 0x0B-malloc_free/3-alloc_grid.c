#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array of ints
 * @width: the width of the array
 * @height: the height
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int *temp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int));
	temp = malloc(width * sizeof(int));
	if (arr == NULL || temp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			temp[j] = 0;
		arr[i]=temp;
	}
	return (arr);
}
