#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - Function to free the linked list
* @head: pointers of the link
*/
void free_list(list_t *head)
{
	list_t *temp;
	list_t *next;
	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
