#include "main.h"

/**
 * print_sign - this function print the sign of an integer
 *
 * @n: takes an input int
 *
 * Return: it returns 1 if + , -1 if negative and 0 when zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
