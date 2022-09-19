#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: string to be printed
 * Return: string
 */
void puts2(char *str)
{

	int ln, j;

	ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}
	for (j = 0; j < ln; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
