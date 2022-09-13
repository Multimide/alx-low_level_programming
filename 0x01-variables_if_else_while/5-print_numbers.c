#include <stdio.h>
/**
 * main- This is a C function that prints
 * allsingle numbers in base 10
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
