#include "main.h"

/**
 * infinite_add - is  a function that adds two numbers.
 * @n1: number to be added
 * @n2: number to to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{


	*r = *n1 + *n2;

	return (r);
}
