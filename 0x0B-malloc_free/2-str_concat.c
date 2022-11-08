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
	
	for(size  = 0; str[size]; size++)
	{
	}
	size++;
	return size;
}
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = len(s1);
	int size2 = len(s2);
	char *nw;
	int i;

	nw = malloc(size1 + size2);
	if(nw == NULL)
		return (NULL);
	for(i = 0; i < size1; i++)
		nw[i] = s1[i];
	for(i = size1; i < (size1 + size2); i++)
		nw[i] = s2[i - size1];
	return (nw);
}
