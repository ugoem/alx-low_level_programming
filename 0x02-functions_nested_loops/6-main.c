#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int t;

	t = _abs(-1);
	printf("%d\n", t);
	t = _abs(0);
	printf("%d\n", t);
	t = _abs(1);
	printf("%d\n", t);
	t  = _abs(-98);
	printf("%d\n", t);
	return (0);
}
