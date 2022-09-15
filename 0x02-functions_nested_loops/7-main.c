#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int t;

	print_last_digit(98);
	print_last_digit(0);
	t = print_last_digit(-1024);
	_putchar('0' + t);
	_putchar('\n');
	return (0);
}
