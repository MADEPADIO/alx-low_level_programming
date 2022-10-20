#include "main.h"

/**
 * more_numbers - this function print number in 10 rows
 *
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}

