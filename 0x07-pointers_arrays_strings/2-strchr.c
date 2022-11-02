#include "main.h"

/**
 * _strchr - locates a char in string
 * @s: string
 * @c: char
 * Return: pointer to the firt occurence
 *
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (*(s + j) != '\0'; i++)
		if (*(s + j) == c)
			return (s + j);
	return ('\0');
}
