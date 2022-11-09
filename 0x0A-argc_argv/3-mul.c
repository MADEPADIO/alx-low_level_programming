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
	int i;
	int sum;

	if (i != 3)
		printf("error\n");
	return (1);


	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d", sum);
	return (0);
}
