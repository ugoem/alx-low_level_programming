#include "main.h"

/**
 * int _abs(int) - computes the absolute value of an integer.
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
