#include "main.h"
#include <stdio.h>

/**
 * main - a program that print fizz buzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		} else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		} else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
