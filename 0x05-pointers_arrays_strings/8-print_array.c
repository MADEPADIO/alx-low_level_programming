#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print array and its element
 *
 * @a: array
 * @n: element
 */

void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		i++;

		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
