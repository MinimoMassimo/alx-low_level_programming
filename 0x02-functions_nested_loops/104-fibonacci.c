#include <stdio.h>

/**
 * main prints first 98 Fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	long int prev1, prev2;
	int i;

	prev1 = 1;
	prev2 = 2;
	printf("%li, ", prev1);
	printf("%li, ", prev2);
	for (i = 2; i < 97; i++)
	{
		printf("%li, ", prev1 + prev2);
		prev1 = prev2;
		prev2 = prev1 + prev2;
	}
	printf("%li\n", prev1 + prev2);
	return (0);
