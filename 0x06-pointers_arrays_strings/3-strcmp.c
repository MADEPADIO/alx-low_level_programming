#include "main.h"

/**
 * _strcmp - this compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}

