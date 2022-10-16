#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a, b;

	a = 97;
	b = 65;

	while (a < 123)
	{
		putchar(b);
		a++;
	}
	while (b < 91)
	{
		putchar(a);
		b++;
	}
	putchar('\n');
	return (0);
}
