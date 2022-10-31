#include "main.h"

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: the full string
 * @accept: the substring
 * Return: pointer to byte in s that matches a bytes in accept, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept [j])
			{
				p = s + i;
				return (p);
			}
		}
	}
}
