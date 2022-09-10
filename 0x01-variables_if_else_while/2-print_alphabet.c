#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet a to z in lowercase, followed by a new line.
 * Return (0)
 */
int main(void)
{
	char letter;

	for (letter ='a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
