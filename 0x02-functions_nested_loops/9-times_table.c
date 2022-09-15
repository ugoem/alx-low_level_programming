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

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			dg = (rw * col);
			if ((dg / 10) > 0)
			{
				_putchar((dg / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dg / 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
