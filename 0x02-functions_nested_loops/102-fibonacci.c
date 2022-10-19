#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 always
 */
int main(void)
{
	long int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;
	printf("%li, ", fib[0]);
	printf("%li, ", fib[1]);
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i != 49)
			printf("%li, ", fib[i]);
		else
			printf("%li\n", fib[i]);
	}
	return (0);
}
