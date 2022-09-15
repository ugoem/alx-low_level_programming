#include "main.h"

/**
 * main - check the codes.
 *
 * Return: Always 0.
 */
int main(void)
{
	int t;

	t = _isalpha('H');
	_putchar(t + '0');
	t = _isalpha('o');
	_putchar(t + '0');
	t = _isalpha('W');
	_putchar(t + '0');
	t = _isalpha(';');
	_putchar(t + '0');
	t = _isalpha('>');
	_putchar(t + '0');
	_putchar('\n');
	return (0);
}
