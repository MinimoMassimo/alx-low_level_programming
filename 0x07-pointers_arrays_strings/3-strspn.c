#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: the full string
 * @accept: the substring
 * Return: number of bytes in s which consist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == " ")
			return (n);
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				continue;
			}
		}
	}
	return (n);
}
