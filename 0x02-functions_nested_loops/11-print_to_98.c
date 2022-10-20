#include "main.h"

/**
 * print_to_98 - this print all natural numbers down to 98
 *
 * @n: takes an integer input
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		_putchar(' ');
		_putchar(n + '0');
		n--;
	} do
	{
		_putchar(' ');
		_putchar(n + '0');
		n++;
	} while (n < 99);
	return (0);
}
