#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the encoded string
 */
char *leet(char *str)
{
	char rep[5][2] = {{'a','4'}, {'e','3'}, {'o','0'}, {'t','7'}, {'l','1'}};
	int i, x;

	for (x = 0; str[x]; x++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[x] == rep[i][0] || str[x] == (rep[i][0] - 32))
			{
				str[x] = rep[i][1];
			}
		}
	}
	return (str);
}
