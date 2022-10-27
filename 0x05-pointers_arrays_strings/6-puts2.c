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

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			i++;
			_putchar (i);
			_putchar('\n');
		}
	}
}
