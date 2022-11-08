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

	for (size  = 0; str[size]; size++)
	;
	return (size);
}

/**
 * _concat - concatenates strings
 * @a: first string
 * @b: second string
 * Return: the new string
 */
char *_concat(char *a, char *b)
{
	int l1 = len(a);
	int l2 = len(b);
	int i = 0;

	for (; i < l2 && b[i] != '\0'; i++)
		a[l1 + i] = b[i];
	return (a);
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
		s1 = "";
	size1 = len(s1);
	if (s2 == NULL)
		s2 = "";
	size2 = len(s2);
	nw = malloc((size1 + size2 + 1) * sizeof(char);
	if (nw == NULL)
		return (NULL);
	_concat(nw, s1);
	_concat(nw, s2);
	return (nw);
}
