#include "main.h"
#include <stdio.h>

/**
 *
 * print_diagsums - prints the sum of two diagonals of square matrix
 *
 * @a: input pointer
 * @size: size of matrix
 *
 * Return:
 */

void print_diagsums(int *a, int size,)
{
	int i, sum1 = 0, sum 2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i% (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			su 2 += *(a + i);
	}

	printf("%d, %d\n", sum2, sum2);
}
