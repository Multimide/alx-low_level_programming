#include <stdio.h>
#include <string.h>

/**
 * print_rev- print string in reverse
 * @s: string to be printed in reverse
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < 10; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
