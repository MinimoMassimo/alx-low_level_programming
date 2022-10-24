#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be processed
 * Return: nothin
 */
void rev_string(char *s)
{
	int size = 0;
	char *sol;

	*sol = *s;

	while (*sol != '\0')
	{
		sol++;
		size++;
	}
	size -= 1;
	while (size >= 0)
	{
		sol--;
		s = sol;
		s++;
		size --;
	}
}
