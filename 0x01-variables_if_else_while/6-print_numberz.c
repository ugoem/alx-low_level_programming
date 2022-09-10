#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, 
 * followed by a new line.
 * Return (array)
 */
int main(void)
{
	int nz;

	for (nz = 48; nz < 58; nz++)
		putchar(nz);
	putchar('\n');
	return (0);
}
