#include "lists.h"
#include <stdlib.h>
/**
 * free_list -Free a list .
 *
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
