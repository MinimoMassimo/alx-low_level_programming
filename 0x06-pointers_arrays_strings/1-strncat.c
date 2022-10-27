#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: string to be concatenated
 * @n: the max number of bytes it will use from src
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i <= n)
	{
		dest[count + i] = src[i];
		i++;
	}
/**

	while (*dest != '\0')
		dest++;
	while (i < n && src[i] != '0')
	{
		dest++;
		*dest = src[i];
		i++;
	}
	dest++;
	*dest = '\0';**/
	return (dest);
}
