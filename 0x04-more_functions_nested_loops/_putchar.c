#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c the character to print
 * Return: 1 on success
 * On error, returns -1 and set the appropriate error
 */
int _putchar(char c)
{
	int res;

	res = write(1, &c, 1);

		return (res);
}
