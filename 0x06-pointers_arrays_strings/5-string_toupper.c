#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @z: letters to change
 *
 * Return: uppercase
 */

char *string_toupper(char *z)
{
	int i;

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 97 && z[i] <= 122)
			z[i] -= 32;
	}

	return (z);
}
