#include <stdio.h>

/**
 * reset_to_98 - take a pointer to an integer as
 * parameter and update its value
 * @n: value to be updated
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	*n = 98;

	printf("%d\n", *n);
}
