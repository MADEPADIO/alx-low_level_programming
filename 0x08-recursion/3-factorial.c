#include "main.h"

/**
 *  factorial - this print out the factorial of given integer
 *
 *  @n: the int input
 *  Return: this returns an int data type
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
