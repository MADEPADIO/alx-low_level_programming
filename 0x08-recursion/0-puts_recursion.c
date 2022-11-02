#include "main.h"

/**
 * _puts_recursion - a function that prints a string followed by a new line
 *
 * @s: string input
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
	}
	_putchar(*s);
}

