#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int j;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (j = 3; j <= sqrt(n); j = j + 2)
	{
		while (n % j == 0)
		{
			max = j;
			n = n / j;
		}
	}

		if (n > 2)
			max = n;

		printf("%ld\n", max);

		return (0);
}
