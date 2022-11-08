#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars and initializes it
 * @size: size of the array
 * @c: the initilizing value
 * Return: the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0)
		return ('\0')
	str = malloc(size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
