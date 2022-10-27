#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		dest++;
		*dest = *src;
		src++;
		i++;
	}
	dest++;
	*dest = '\0';
	while (i >= 0)
	{
		src--;
		dest--;
		i--;
	}
	dest--;
	return (dest);
}
