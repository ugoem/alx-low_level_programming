#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main()
{
	int t;

	t = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	t = print_sign(-8);
	_putchar(',');
	_putchar(' ');
	_putchar(t + '0');
	_putchar('\n');
	 return (0);
}
