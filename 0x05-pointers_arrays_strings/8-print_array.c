#include <stdio.h>
#include <string.h>

/**
 * print_array- print elements of an array
 * @a: Array
 * @n: Number of arrays to be printed
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i, c;

	for (i = 0; i <= n; i++)
	{
		c = a[i];
		printf("%d ", c);
	}
	printf("\n");
}
