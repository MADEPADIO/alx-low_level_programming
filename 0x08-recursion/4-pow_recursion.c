#include "main.h"

/**
 * _pow_recursion - this function raise an integer to a power
 * @x: first integer
 * @y: second integer to be raised by
 * Return: will return an  int -1 if y is lower
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (1);
	if (x == 1 || y == 0)
		return (1)
	return (x * _pow_recursion(x, y - 1));
}

