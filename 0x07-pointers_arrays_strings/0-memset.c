#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the address to be filled
 * @n: the number of bytes of memory pointed to by s to be filled
 * @b: the constant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (s[i] == '\0')
			break;
		s[i] = b;
	}
	return (s);
}
