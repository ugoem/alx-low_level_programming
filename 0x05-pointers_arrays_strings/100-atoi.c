#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc flag to compile 
 * your code.
 * @s: string to be converted
 * Return: converted integer
 */
int _atoi(char *s)
{

	int i, d, n, ln, f, dg;

	i = d = n = ln = f = dg = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	while (i < ln && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dg = s[i] - '0';
			if (d % 2)
				dg = -dg;
			n = n * 10 + dg;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
