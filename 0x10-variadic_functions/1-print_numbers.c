#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers + \n
 * @separator: string printed between numbers
 * @n: number of int passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prnt;
	unsigned int i;

	va_start(prnt, n);
	printf("%d", va_arg(prnt, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s%d", separator, va_arg(prnt, int));
		else
			return;
	}
	va_end(prnt);
	printf("\n");
}
