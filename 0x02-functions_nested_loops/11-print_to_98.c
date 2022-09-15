#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - is a fucntion that prints all natural numbers from n to 98
 * @n: the number used
 * followed by a new line, the numbers must be seperated by a comma
 * The numbers should be printed in order
 * The first number printed should be the number passed to the function
 * The last print number should be 98
 * Standard library is allowed in this task
 * Return: 0 results.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
