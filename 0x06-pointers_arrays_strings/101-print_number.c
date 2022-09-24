#include <stdio.h>
#include <string.h>

/**
 * print_number - Print integer
 * @n: Integer to be printed
 *
 * Return: NULL
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
