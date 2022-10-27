#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	/**
	 * while (*dest != '\0')
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
	dest--;**/
	return (dest);
}
