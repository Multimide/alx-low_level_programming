#include <stdio.h>
#include <string.h>

/**
 * puts_half- print half of a string
 * @str: string to be printed
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len, c, i;

	len = strlen(str);

	if (len % 2 != 0)
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			c = str[i];
			putchar(c);
		}
	}

	else
	{
		for (i = len / 2; i < len; i++)
		{
			c = str[i];
			putchar(c);
		}
	}
	printf("\n");
}
