#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum1, sum2, sumtotal;
	int i;

	sum1 = 0;
	sum2 = 0;
	sumtotal = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum1 = sum1 + i;
		} else if ((i % 5) == 0)
		{
			sum2 = sum2 + i;
		}
	}
	sumtotal = sum1 + sum2;
	printf("%lu\n", sumtotal);
	return (0);
}
