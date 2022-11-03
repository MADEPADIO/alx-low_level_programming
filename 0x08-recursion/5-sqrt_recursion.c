#include "main.h"

/**
 * find_root-  a function that find square root of a number
 *
 * @n: input integer
 * @root: testing root value
 * Return: Intger
 */

int find_root(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - a function that print the  sqaure root of a number
 *
 * @n: input integer
 * Return: Always an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 0));
}


