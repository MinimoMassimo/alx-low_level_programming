#include "main.h"
#include <stdlib.h>

/**
 * len - lenght of string
 * @str: the string
 * Return: the length
 */
int len(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	;
	return (len);
}
/**
 * _concat - concatenates strings
 * @s1: one string
 * @s2: second string
 * Return: the new string
 */
char *_concat(char *s1, char *s2)
{
	int size2 = len(s2);
	int size1 = len(s1);
	int i;

	for (i = 0; i < size2 && s2[i] != '\0'; i++)
		s1[size1 + i] = s2[i];
	return (s1);
}
/**
 * argstostr - concatenates arguments
 * @ac: the number of arguments
 * @av: the arguments
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, size = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			av[i] = "";
		size += len(av[i]);
	}
	res = malloc((size + ac + 1) * sizeof(char));
	if (res == NULL)
	{
		free(res);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_concat(res, av[i]);
		_concat(res, "\n");
	}
	return (res);
}
