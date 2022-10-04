#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @src: String pointed to
 * @dest: pointer to the buffer that will receive the string from src
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int ln, i;

	ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < ln; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


