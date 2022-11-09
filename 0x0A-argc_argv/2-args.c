#include "stdio.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to array of char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
