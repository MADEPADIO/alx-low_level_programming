#include <stdio.h>

#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: a linked list
 *
 * Return: a structure to a linked list
 *
 */

size_t print_list(const list_t *h)
{
	size_t = 0;

	while (h)

	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");

		cont++;
		h = h->next;


	}
	return (cont);
}

