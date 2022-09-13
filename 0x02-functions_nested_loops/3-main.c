#include "main.h"

/**
 * main - checks the code
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int main(void)
{
	int _islower(int c);

	int r;
    
	r = _islower('m');
	_putchar(r + '0');
	r = _islower('A');
	_putchar(r + '0');
	r = _islower(108);
	 _putchar(r + '0');
	r = _islower('i');
	_putchar(r + '0');
	r = _islower('N');
	_putchar(r + '0');
	
	return (0);
}
