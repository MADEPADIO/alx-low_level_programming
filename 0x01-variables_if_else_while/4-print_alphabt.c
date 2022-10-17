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

	a = 96;

	while (a < 122)
	{
		a++;
		if (a == 113)
			continue;
		if (a == 101)
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}

