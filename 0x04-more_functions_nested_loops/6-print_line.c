#include "main.h"

/**
 * print_line - this function print line on screen
 *@n: input for line number
 */

void print_line(int n)
{
	int b;

	b = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	} else
	{
		while (b < n)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}




