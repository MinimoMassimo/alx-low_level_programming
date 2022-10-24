#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer dest
 * @dest: buffer
 * @src: string pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
