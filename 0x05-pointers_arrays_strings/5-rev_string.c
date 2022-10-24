#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be processed
 * Return: nothin
 */
void rev_string(char *s)
{
	int size = 0;
	char *sol = &*s;
	/**char *a = &*s;**/

	while (*sol != '\0')
	{
		sol++;
		size++;
	}
	size -= 1;
	/**
	while (size >= 0)
	{
		sol--;
		*a = *sol;
		a++;
		size--;
	}**/
	s = sol;
}
