#include "main.h"

/**
 * *_strstr - locates a substring in a string
 * @needle: the substring
 * @haystack: the full string
 * Return: pointe to beggining of needle in haystack or NULL if needle not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i, j, o, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			o = i;
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + 1])
				{
					a = 0;
					break;
				}
				else
					a = 1;
			}

		}
	}
	p = haystack[i];
	if (a = 1)
		return (p);
	return ('\0');
}
