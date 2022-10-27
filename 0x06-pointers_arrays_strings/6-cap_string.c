#include "main.h"

/**
 * cap_string - capitalizes all chars of a sting
 * @str: the string
 * Return: string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {9, ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 1; str[i + 1]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
