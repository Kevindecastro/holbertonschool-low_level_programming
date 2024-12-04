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

	while (h != NULL)
	{
	i	printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
