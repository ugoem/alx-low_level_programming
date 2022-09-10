#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return (0)
 */
int main(void)
{
	int revlower;
	
	for (revlower = 'z'; revlower >= 'a'; revlower--)
	{
		putchar(revlower); 
	}
	putchar('\n');
	return (0);
}
