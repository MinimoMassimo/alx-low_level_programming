#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: size of each element in the array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	return;
}
