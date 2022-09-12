#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print n and last digit of n to standard output
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int n_2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_2 = n % 10;
	printf("Last digit of, %d is %d ", n, n_2);
	if (n_2 > 5)
	{
		printf("and is greater than 5\n");
	} else if (n_2 == 0)
	{
		printf("and is zero\n");
	} else if (n_2 < 6)
	{
		printf("and is less than 6\n");
	}
	return (0);
}
