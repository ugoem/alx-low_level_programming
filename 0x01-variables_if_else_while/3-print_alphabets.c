#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 * Return: (0) Always success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
