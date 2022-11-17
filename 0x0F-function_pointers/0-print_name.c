#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return (NULL);
	f(name);
}
