#include "main.h"

/**
 * swap_int - a function that swap two int betweeen pointers
 *
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b);
{
	int n;

	n = *a;

	*a = *b;

	*b = n;

}
