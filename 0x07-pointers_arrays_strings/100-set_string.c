#include "main.h"

/**
 * set_string - sets value of pointer to a char
 * @s: the pointer
 * @to: the char
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	_putchar(**s);
	_putchar(*to);
}
