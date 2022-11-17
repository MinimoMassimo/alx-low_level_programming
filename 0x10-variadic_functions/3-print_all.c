#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format - list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ans;
	int i = 0;

	va_start(ans, format);
	while (format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(ans, char));
		else if (format[i] == 'i')
			printf("%d", va_arg(ans, int));
		else if(format[i] == 'f')
			printf("%f", va_arg(ans, float));
		else if(format[i] == 's')
			printf("%s", va_arg(ans, char*));
		if (format[i+1])
			printf(", ");
	}
	va_end(ans);
	printf("\n");
}
