#include "main.h"
/**
 * _abs - This programm prints absolute value
 *
 *@n: this takes an integer
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		return (n);

	}
	else
	{
		result  = n + -n + -n;
		return (result);
	}

}

