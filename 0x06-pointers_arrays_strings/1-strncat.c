#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @src: string to be apppende
 * @n: the number torf bytes form @arcs
 * @dest: String to be added to
 *
 * Return:  a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
