#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
