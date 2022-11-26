#include "lists.h"

#include <string.h>

#include <stdio.h>



/**
 * add_node_end - this function add a node to the end of the list
 *
 * @head: - points to the end of the node
 *
 * @str: - holds a str
 *
 * Return: head
 */



list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{


		*head = new;

		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}

