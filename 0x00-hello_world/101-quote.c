#include <stdio.h>
#include <unistd.h>

/**
 * Main - prints exactly "and that piece of art is useful"
 * -Dora Korpa, 2015-10-19",
 *  followed by a new line, to the standard error.
 *  Returns: always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return(1);
}

