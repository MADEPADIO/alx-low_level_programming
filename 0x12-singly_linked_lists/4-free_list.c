#include "lists.h"

/**
 * free_list -Free a list .
 *
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_list(list_t *head)
{
	list_t  *tmp;

	while (head)

	{
		tmp = head->next;
		free(head);

		head = tmp;
	}

}
