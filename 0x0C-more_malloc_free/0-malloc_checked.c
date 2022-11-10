#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc
 * @b: the size of the memory
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	unsigned int i;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
