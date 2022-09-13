#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: (0)
 */
int main(void)
{
	int base10;
	int base16;

	for (base10 = 48; base10 < 58; base10++)
	{
		putchar(base10);
	}
	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
