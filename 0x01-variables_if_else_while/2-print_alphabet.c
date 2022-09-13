#include <stdio.h>

/**
 * main- This is a C program that
 *prints the alphabets in lower case
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar(
			'\n');

	return (0);
}
