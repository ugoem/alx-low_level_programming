#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: (0) Always success
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
		if (numb != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
