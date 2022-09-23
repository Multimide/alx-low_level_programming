#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes letters in strings
 * @z: string to be caoitalize
 *
 * Return: Capitalized string
 */

char *cap_string(char *z)
{
	int i = 0;
	int j;
	char symbols[] = " \n\t,;.!?\"(){}";

	if (z[0] >= 'a' && z[0] <= 'z')
		z[0] -= 32;

	for (; z[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (z[i] == symbols[j])
			{
				if (z[i + 1] >= 'a' && z[i + 1] <= 'z')
					z[i + 1] -= 32;
			}
		}
	}
	return (z);
}
