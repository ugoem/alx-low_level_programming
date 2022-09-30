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

	int i, d, n, ln, f, dgt;

	i = d = n = ln = f = dgt = 0;

	while (s[ln] != '\0')
		ln++;
	
	while (i < ln && f == 0)
	{
		if (s[i] == '-')
			++d;
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
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
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	
	int sum, nm, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	
	for (k = 1; k < argc; k++)
	{
		nm = _atoi(argv[k]);
		if (nm >= 0)
		{
			sum += nm;
		}
	}

	printf("%d\n", sum);
	return (0);
}




		
