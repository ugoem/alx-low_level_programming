#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 * Return: string
 */
void rev_string(char *s)
{

	char rvs = s[0];
	int j, ln;

	ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	for (j = 0; j < ln; j++)
	{
		ln--;
		rvs = s[j];
		s[j] = s[ln];
		s[ln] = rvs;
	}
}
