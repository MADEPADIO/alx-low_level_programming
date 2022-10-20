#include "main.h"
#include <stdio.h>

/**
 * _isupper - this function checks for upper case
 * @c: this take a single char
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}

