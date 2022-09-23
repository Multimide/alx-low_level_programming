#include <stdio.h>
#include <string.h>

/**
 * _strcat- Concatenates two strings
 * @src: string to be added
 * @dest: string to be appended to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i <= len1; i++)
	{
		dest[len2] = src[1];
		len2++;
	}
	return (dest);
}
