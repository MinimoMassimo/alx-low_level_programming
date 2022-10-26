#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		dest++;
		*dest = *src;
		src++;
	}
	return (dest);
}
