#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings + \n
 * @separator: the separator
 * @n: the number of strings passed to function
 * Return: nothinig
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *res;

	va_start(p, n);
	printf("%s", va_arg(p, char*));
	for (i = 1; i < n; i++)
	{
		res = va_arg(p, char*);
		if (res == "(null)")
			continue;
		if (separator == NULL)
			printf("%s", res);
		else
			printf("%s%s", separator, res);
	}
	printf("\n");
	va_end(p);
}
