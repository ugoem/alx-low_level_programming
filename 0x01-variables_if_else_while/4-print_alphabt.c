#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: (0)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter !='e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
