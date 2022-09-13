#include "main.h"

/**
 * print_alphabet_x10(void) -  prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
