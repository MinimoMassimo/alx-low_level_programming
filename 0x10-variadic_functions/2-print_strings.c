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
	char *sep, *ans;

	if (separator == NULL || *separator== 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(p, n);
	ans = va_arg(p, char*);
	if (n > 0)
	{
		if (ans == NULL)
			ans = "(nil)";
		printf("%s", ans);
	}
	for (i = 1; i < n; i++)
	{
		ans = va_arg(p, char*);
		if (ans == NULL)
			ans = "(nil)";
		printf("%s%s", sep, ans);
	}
	printf("\n");
	va_end(p);
}
