#include "main.h"

/**
 * *string_toupper - changes all letters to uppercase
 * @str: the string
 * Return: the upper string
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str += 32;
		str++;
	}
	return (str);
}
