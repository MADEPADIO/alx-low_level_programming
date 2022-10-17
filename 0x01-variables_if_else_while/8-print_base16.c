#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
