#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{

int a;
int b;

a = 0;

while (a < 10)
{
	b = 97;

	while (b < 123)
	{
		_putchar(b);
		b++;
	}

	_putchar('\n');
	a++;
}
}
