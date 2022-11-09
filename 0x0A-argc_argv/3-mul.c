#include "stdio.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: args counters
 * @argv: char pointer of array
 * Return: 0 if successful else 1
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{

		printf("Error\n");

		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
