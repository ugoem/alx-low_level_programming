#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return (0)
 */
int main(void)
{
	int decimal;

	for (decimal = 0; decimal<=9; decimal++)
		printf("%d", decimal);
	printf("\n");
	return (0);
}
