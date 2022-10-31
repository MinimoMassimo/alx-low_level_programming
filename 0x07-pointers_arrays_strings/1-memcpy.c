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
	for (n -= 1; n >= 0; n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
