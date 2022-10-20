#include "main.h"


/**
 * _isupper - this function checks for upper case
 * @c: this take a single char
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	} else
	{
		return (0);
	}
}

