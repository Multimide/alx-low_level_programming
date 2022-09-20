#include <stdio.h>
#include <string.h>

/**
 * puts2- Print string in reverse
 * @str: String to be printed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, len, temp;

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i -1] = temp;
	}
	
}
