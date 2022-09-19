#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: the string whose lenght is the be returned
 * Return: String lenght
 */
int _strlen(char *s)
{

	int ln = 0;
	while (*s != '\0')
	{
		ln++;
		s++;
	}
	return (ln);
}
