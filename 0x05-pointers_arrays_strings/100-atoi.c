#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to be converted
 * Return: converted string into int
 */
int _atoi(char *s)
{
	char x;
	int res = 0;
	int i, a;

	while (*s != '\0' && (*s < 48 || *s > 57))
	{
		x = *s;
		s++;
	}
	if (*s < 48 || *s > 57)
		return (0);
	if (x == '-')
	{
		a = 1;
	}
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
