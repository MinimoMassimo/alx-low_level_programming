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
	char *ptr = dest;

	if (*dest == '\0')
		return ('\0');
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
