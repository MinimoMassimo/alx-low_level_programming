#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - locates a char in a string
 * @s: the stirng
 * @c: the char we are looking for
 * Return: pointer to first occurence of c or NULL if c not there
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
