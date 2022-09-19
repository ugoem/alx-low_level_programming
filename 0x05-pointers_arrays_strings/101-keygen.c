#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0 (Success)
 */
int main(void)
{

	int pwd[100];
	int j, sum, num;

	sum = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pwd[j] = rand() % 78;
		sum += (pwd[j] + '0');
		putchar(pwd[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;

		}
	}

	return (0);
}

