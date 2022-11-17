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
	int a;

	va_start(prnt, n);
	if (n > 0)
		printf("%d", va_arg(prnt, int));
	for (i = 1; i < n; i++)
	{
		a = va_arg(prnt, int);
		if (separator != NULL && separator != 0)
			printf("%s%d", separator, a);
		else
			printf("%d", a);
	}
	va_end(prnt);
	printf("\n");
}
