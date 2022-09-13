#include <stdio.h>
/**
 * main - This is a C program that prihts
 * lower case alphabets in reverse
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
