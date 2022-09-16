#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @v: number of times the character _ should be printed
 */
void print_line(int v)
{
	if (v <= 0)
	{
		_putchar('\n');
	} else 
	{
		int k;

		for (k = 1; k <= v; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
