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
	int result;

	if (n >= 0)
	{

		result = n % 10;
		return (result);
	} else if (n < 0)
	{


		n = n + -n + -n;
		result = n % 10;

		return (result);
	}

}
