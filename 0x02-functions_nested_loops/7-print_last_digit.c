#include "main.h"

/**
 * print_last_digit - This function only print out the last digit in a number
 *
 *@int: input for integer
 *
 * Return: Always n value (success)
 */

int print_last_digit(int n)
{

	if (n >= 0)
	{
		n = n % 10;
		return (n);
	} else
	{
		n = n + -n + -n;
		n = n % 10;
		return (n);
	}
}
