#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: number of bytes to be copied from memory
 * @src: the original memory area
 * @dest: the memory to be copied to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
