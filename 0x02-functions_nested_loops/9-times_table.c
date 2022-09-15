#include "main.h"

/**
 * times_table - is a function that prints the 9 times table, starting with 0
 * rw = row, col = column, dg = digits of the result
 * Retun: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rw, col, dg;

	for (rw = 0; rw < 10; rw++)
	{
		for (col = 0; col < 10; col++)
		{
			dg = (rw * col);
			if ((col == 0)
			{
				_putchar((dg + '0');
			}
			if (dg < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(dg + '0');
			}
			else if (dg >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((dg / 10) + '0');
				_putchar((dg % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
