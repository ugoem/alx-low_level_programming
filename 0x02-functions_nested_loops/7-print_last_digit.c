#include "main.h"

/**
 * print_last_digit(int n) - prints the last digit of a number
 * @n the number whose last digit is to be printed
 * Return: (n) value of the last digit
 */
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}



