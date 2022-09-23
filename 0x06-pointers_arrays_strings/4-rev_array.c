#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Reverse content of array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int temp; /* holds value */
	int i;    /* counter */
	int j = n - 1; /* reverse counter */

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}

}
