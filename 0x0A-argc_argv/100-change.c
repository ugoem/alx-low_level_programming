#include <stdio.h>
#include <stdlib.h>
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
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			res++;
			num -= coin[j];
		}
	}

	printf("%d\n", res);
	return (0);
}
