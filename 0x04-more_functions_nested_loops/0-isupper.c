#include <stdio.h>
#include "main.h"

/**
 *_isupper - Check if character is uppercase
 *
 * @c: is the arguement to the function
 * Return: 1 if c is uppercaseand 0 if not
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else if (c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
