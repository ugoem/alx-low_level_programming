#include "main.h"

/**
 * int _abs - computes the absolute value of an integer.
 * @n: the number whose absolute value is to be found 
 * Return: abs
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * n);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
