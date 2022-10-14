#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n>0)
	{
		printf("%lu is positive", n);
	}
	if (n==0)
	{
		printf("%lu is zero", n);
	}
	if (n<0)
	{
		printf("%lu is negative", n);
	}
	return (0);
}	
