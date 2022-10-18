#include "main.h"

/**
 * print_to_98 - outputs till 98
 * @n: single input
 * Return: null
 */
void print_to_98(int n)
{
        int a;

        while (n < 98 || n < 98)
        {
		if (n < 0)
                {
			a = -1 * n;
                        _putchar('-');
		}
		else
			a = n;
                if (a >= 100)
                {
			_putchar((a / 100) + '0');
                        _putchar(((a % 100) / 10) + '0');
                }
                else if (a >= 10)
			_putchar((a / 10) + '0');
                _putchar((a % 10) + '0');
                _putchar(',');
                _putchar(' ');
		if (n > 98)
			n--;
		else
                       	n++;
        }
        if (n == 98)
        {
                _putchar('9');
                _putchar('8');
                _putchar('\n');
        }
}
11-print_to_98.c [unix] (13:11 18/10/2022)                              59,1 Bot
Type  :qa  and press <Enter> to exit Vim
