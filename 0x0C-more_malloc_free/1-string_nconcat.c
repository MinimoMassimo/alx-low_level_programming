#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: num of chars we concatenate to s1 from s2
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size2, size1, i;
	int a = (int) n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size2 = 0; s2[size2]; size2++)
		;
	if (a >= size2)
		a = size2;
	for (size1 = 0; s1[size1]; size1++)
		;
	ptr = malloc(size1 + a + 1);
	if(ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (i = size1; i < size1 + a; i++)
		ptr[i] = s2[i - size1];
	return (ptr);
}
