#include "main.h"
#include <stdlib.h>

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
	int count = 0;

	while (needle[count] != '\0')
		count++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != count)
			haystack++;
		else
			return(haystack);
	}
	return (NULL);
}
