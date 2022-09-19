#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 * @num: number whose second half is to be printed
 * Return: string
 */
void puts_half(char *str)
{

	int ln, num, i;

	ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}
	if (ln % 2 == 0)
	{
		for (i = ln / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (ln % 2)
	{
		for (num = (ln - 1) / 2; num < ln - 1; num++)
		{
			_putchar(str[num + 1]);
		}
	}
	_putchar('\n');
}
