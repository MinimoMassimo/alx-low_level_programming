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

	i = 0;
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			a = 1;
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if (a = 1)
		res *= -1;
	return (res);
}
