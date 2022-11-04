#include "main.h"

/**
 * *_strncpy - copies string
 * @dest: the destination of the copied string
 * @src: string to copy
 * @n: number of chars to copy from src
 * Return: copied char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
