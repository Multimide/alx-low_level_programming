#include <stdio.h>
/**
 * main -This is a C program that prints a code in upper
 * and lower casw
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a, b;
	a = 'a';

	b = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
