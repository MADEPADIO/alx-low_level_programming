#include "variadic_functions.h"

#include <stdio.h>

/**
 * print_strings - print a string followed by new line
 * @separator: strings printed between strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list list;

	char *hold;

	va_start(list, n);

			for (i = 0; i < n; i++)
			{
				hold = va_arg(list, char*);

				if (hold == NULL)

					printf("(nill)");

				else

					printf("%s", hold);

				if (1 != (n - 1) && separator != NULL)
					printf("%s", separator);
			}

			printf("\n");

			va_end(list);
}

