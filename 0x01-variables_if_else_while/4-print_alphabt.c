#include <stdio.h>
/**
 *main- This is a C program that print
 *alphanets in lower case with
 *a new line
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}

	}
	putchar('\n');

	return (0);
}
