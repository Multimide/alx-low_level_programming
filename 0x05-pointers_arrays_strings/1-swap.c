#include <stdio.h>

/**
 * swap_int- swap the value of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a =  *b;
	*b = t;

}
