#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be processed
 * Return: nothin
 */
void rev_string(char *s)
{
	int size = 0;
	int i;
	char *sol, temp;

	sol = s;
	while (*sol != '\0')
	{
		sol++;
		size++;
	}
	size -= 1;
	for (i = 0; i < (size / 2); i++)
	{
		sol--;
		temp = s[i]; 
		s[i] = *sol;
		*sol = temp;
	}
}
