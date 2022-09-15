#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * a and b are the two even numbers whose sum is to be found
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a, b, next_term, sum_total;

	a = 1;
	b = 2;
	sum_total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum_total = sum_total + a;
		}
		next_term = a + b;
		a = b;
		b = next_term;
	}

	printf("%lu\n", sum_total);

	return (0);
}
