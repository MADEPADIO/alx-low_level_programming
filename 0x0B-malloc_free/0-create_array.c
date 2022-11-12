#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: size of array
 * @c: storage char
 * Return: Pointer of an array of char
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}

