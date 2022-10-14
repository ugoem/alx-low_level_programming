#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the resulting sum if success else return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
