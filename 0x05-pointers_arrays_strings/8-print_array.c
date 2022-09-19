#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array to be printed
 * @n: the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they
 * are stored in the array
 * Return: array
 */
void print_array(int *a, int n)
{

	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
		{
			printf("%d", a[j]);
		}
		else
		{
			printf(", %d", a[j]);
		}
	}
		printf("\n");
}
