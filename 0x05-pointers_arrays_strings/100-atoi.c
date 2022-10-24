#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to be converted
 * Return: converted string into int
 */
int _atoi(char *s)
{
	int res = 0;
	int i, a;

	if (*s < 48 || *s > 57)
		return (0);
	if (s[0] == '-')
	{
		a = 1;
		s++;
	}
	if (s[0] == '+')
		s++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s < 48 || *s > 57)
			return(0);
		res = res * 10 + s[i] - '0';
	}
	if (a == 1)
		res *= -1;
	return (res);
}
