#include <stdio.h>

/**
 * main - finds and prints largest prime factor of 612852475143
 *
 * Return: 0 always
 */
int main(void)
{
	long int n = 612852475143;
	long int max;
	long int i = 2;

	while (n > 1)
	{
		while (n % i == 0)
		{
			n = n / i;
			max = i;
		}
		i++;
	}
	printf("%li\n", max);
	return (0);
}
