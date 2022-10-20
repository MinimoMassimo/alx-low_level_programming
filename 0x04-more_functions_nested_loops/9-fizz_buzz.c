#include <stdio.h>

/**
 * main - prints numbers from 1-100 but on multiples of 3 prints instead 'fizz'
 *
 * Return: 0 always
 */
int main(void)
{
	int x;

	for(x = 1; x < 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
			printf("Fizz ");
		else if (x % 5 == 0 && x % 3 != 0)
			printf("Buzz ");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", x);
	}
	printf("Buzz\n");
	return (0);
}
