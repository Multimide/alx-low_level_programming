#include <stdio.h>
/**
 * main - This is a C program that prints
 * all possible combination of single digits
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);

		if (a == 9)
		{
			putchar('\n');

			return (0);

		}

		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}

	}
	return (0);
}
