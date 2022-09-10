#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**                                                                                                                      * main - assigns a random number to int n each time it runs
 * and print n and last digit of n to standard output
 * Return (0) Success
 */
int main(void)
{
	int n;
	int n_2;
       
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_2 = n%10;
	if (n_2 > 5)
	{
		printf("Last digit of, %d is %d and is greater than 5\n", n, n_2);
	} else if (n_2 == 0)
	{
		printf("Last digit of, %d is %d and is zero\n", n, n_2);
	} else if (n_2 < 6)
	{
		printf("Last digit of, %d is %d and is less than 6\n", n, n_2);
	}
	return (0);
}
