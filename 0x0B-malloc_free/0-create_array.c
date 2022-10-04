#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 * @*str: pointer array of characters to be created
 * @c: specific char the array is initialized to
 * @size: size of the array created
 *
 * Return: NULL if size = 0 and  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!',
	       '\0'};

	size = sizeof(str);

	for (c = 0; c <= size; c++)
	{
		str[size] = c;

		if (size == '0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
