#include <stdio.h>
#include <string.h>

/**
 * puts2- Print every other character in a string
 * @str: String to be printed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, len, c;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		c = str[i];
		putchar(c);
	}

}
