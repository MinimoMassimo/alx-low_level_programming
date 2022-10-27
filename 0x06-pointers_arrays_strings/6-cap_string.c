#include "main.h"

/**
 * cap_string - capitalizes all chars of a sting
 * @str: the string
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 1;
	int j;
	char sep[] = {9, ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	str[0] += 32;
	while (str[i] != '\0')
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 97 && str[i] <= 122)
					str[i] +32;
		}
	}
	return (str);
}
