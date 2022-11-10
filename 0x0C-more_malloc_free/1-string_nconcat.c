#include "main.h"
#include <stdlib.h>

/**
 * len - length of string
 * @str: the string
 * Returns: the length
 */
int len(char *str)
{
	int size;

	for (size = 0; str[size]; size++)
	;
	return (size);
}
/**
 * _concat - just concatenates
 * @s1: first
 * @s2: second
 * Return: the new string
 */
char *_cat(char *s1, char *s2, int n)
{
	int size1 = len(s1);
	int i;

	for(i = 0; i < n && s2[i]; i++)
	{
		s1[size1 + i] = s2[i];
	}
	return (s1);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to add to s1
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size2;
	int size1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size2 = len(s2);
	size1 = len(s1);
	if (n >= (unsigned int) size2)
		n = size2;
	ptr = malloc(size1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	_cat(s1, s2, n);
	_cat(ptr, "\0", 1);
	return (ptr);
}
