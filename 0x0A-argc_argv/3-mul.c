#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	
	int i, d, n, ln, f, digit;

	i = d = n = ln = f = digit = 0;

	while (s[ln] != '\0')
		ln++;
	
	while (i < ln && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
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

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	
	int res, nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return(1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	res = nm1 * nm2;

	printf("%d\n", res);

	return (0);
}

