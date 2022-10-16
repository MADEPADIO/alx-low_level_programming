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

	while (b < 123)
	{
		putchar(b);
		b++;
	}
	while (a < 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
