#include "main.h"

/**
 * _memcpy - a function that copy memory byte
 * @dest: destination
 * @src: source
 * @n: bytes filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);

	return (dest);
}
