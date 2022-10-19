#include <stdio.h>

/**
 * main - finds and prints sum of even-valued terms of fibonacci sequence < 4000000
 * Return: 0 always
 */
int main(void)
{
	int i;
	long int fib[34], sum;
	
	sum = 2;
	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 34; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] % 2 == 0)
			sum += fib[i];
	}
	printf("%li\n", sum);
	return (0);
}
