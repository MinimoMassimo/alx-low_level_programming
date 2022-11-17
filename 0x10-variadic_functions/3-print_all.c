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
	char *str;

	va_start(ans, format);
	while (format != NULL)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(ans, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(ans, int));
		else if(format[i] == 'f')
			printf("%f", (float) va_arg(ans, double));
		else if(format[i] == 's')
		{
			str = va_arg(ans, char*);
			while (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
		}
		if (format[i+1])
			printf(", ");
	}
	va_end(ans);
	printf("\n");
}
