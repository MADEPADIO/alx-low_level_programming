#include "main.h"

/**
 * is_prime_number - a function that checks if an integer is prime number
 *
 * @n: input integer
 *
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);

	if (n / n == 1 || n / 1 == n)
		return (1);
}


