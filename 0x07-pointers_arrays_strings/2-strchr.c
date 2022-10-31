#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s: the stirng
 * @c: the char we are looking for
 * Return: pointer to first occurence of c or NULL if c not there
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return ('\0');
}
