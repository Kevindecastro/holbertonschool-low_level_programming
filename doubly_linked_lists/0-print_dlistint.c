#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_dlistint - prints all elements of a dlistint_t list
* @h: pointer to the head of the list
*
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
