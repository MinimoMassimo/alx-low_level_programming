#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory bloc using malloc and free
 * @ptr: the pointer to the original memory
 * @old_size: size of ptr
 * @new_size: new size of the new memory block
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nw;
	int n;

	if (ptr == NULL)
	{
		nw = malloc(new_size);
		free(ptr);
		return (nw);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nw = malloc(new_size * sizeof(char));
	if (nw == NULL)
		return (NULL);
	if (new_size < old_size)
		n = new_size;
	else if (new_size == old_size)
		return (ptr);
	else
		n = old_size;
	free(ptr);
	return (nw);
}
