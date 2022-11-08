#include "main.h"
#include <stdlib.h>

/**
 * len - size of string
 * @str: the string
 * Return: the length
 */
int len(char *str)
{
	int size;

	for (size  = 0; str[size];)
		size++;
	size++;
	return (size);
}
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *nw;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = len(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = len(s2);
	if (s1 == NULL && s2 == NULL)
		return ('\0');
	nw = malloc(size1 + size2 - 1);
	if (nw == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < (size1 + size2 - 1); i++)
	{
		if (i < (size1 - 1))
			nw[i] = s1[i];
		else
		{
			nw[i] = s2[j];
			j++;
		}
	}
	return (nw);
}
