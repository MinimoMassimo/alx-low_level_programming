#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer dest
 * @dest: buffer
 * @src: string pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
