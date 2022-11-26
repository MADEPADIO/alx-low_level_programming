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
	size_t count = 0;

	while (h != NULL)

	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;


	}
	return (count);
}

