#include <stdio.h>
/**
 * main - This is a C programm that prints
 * numbber of lowwer case in base 15
 *
 * Return: Always 0
 */

int main(void)
{
	char a = '0';
	char l = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}

