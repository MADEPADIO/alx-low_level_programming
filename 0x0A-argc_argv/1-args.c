#include "stdio.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: pointer to array of argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		prinf("%d\n", argc - 1);
	return (0);
}
