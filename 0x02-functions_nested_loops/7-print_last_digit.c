#include "main.h"

/**
 * print_last_digit - This function only print out the last digit in a number
 *
 *@n: input for integer
 *
 * Return: Always n value (success)
 */

int print_last_digit(int n)
{

	if (n >= 0)
	{

		n = n % 10;
		return (n);
	} else if (n < 0)
	{


		n = n + -n + -n;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}

}
