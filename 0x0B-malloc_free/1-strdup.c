#include "main.h"
#include <stdlib.h>

/**
 * len - length of string
 * @str: the string
 * Return: the length
 */
int len(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
	{
	}
	size++;
	return (size);
}
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
	size = len(str);
	nw = malloc(size);
	if (nw == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nw[i] = str[i];
	return (nw);
}
