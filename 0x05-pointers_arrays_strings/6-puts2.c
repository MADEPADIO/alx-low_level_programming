#include "main.h"

/**
 * puts2 - this function prings string divisible by 2
 *
 * @str: the input string
 */

void puts2(char *str)
{
	int i;

	i = 0;

	for ( str[i] !='\0'; i<str[i]; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar (i);
			_putchar('\n');
		}
	}
}
