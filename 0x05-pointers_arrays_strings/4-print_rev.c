#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @*s: string to be printed in reverse order
 * Return: string
 */
void print_rev(char *s)
{

	int i, k, ln;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}

	ln = k;

	for (i = ln - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
