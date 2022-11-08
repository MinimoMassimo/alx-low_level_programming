#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - allocates space in memory and initializes it to a string
 * @str: the string
 * Return: pointer to the memory
 */
char *_strdup(char *str)
{
	char *nw;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	size = sizeof(str);
	nw = malloc(size);
	if (nw == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nw[i] = str[i];
	return (nw);
}
