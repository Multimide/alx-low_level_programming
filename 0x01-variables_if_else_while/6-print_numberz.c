#include <stdio.h>
/**
 * main- This is a C program that print
 * single numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
