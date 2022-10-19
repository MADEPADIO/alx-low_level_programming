#include "main.h"

/**
 * _isalpha - this check for alphabet(lowercase or uppercase)
 *
 * @c: this takes in a single input
 *
 * Return: 1 if it is an alphabet(lower case or uppercase) 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c > 97 && c < 123) && (c > 'a' && c <= 'z') || (c > 63 && c < 91) && (c > 'A' && c <= 'Z'))

		return (1);
		else


			return (0);
}
