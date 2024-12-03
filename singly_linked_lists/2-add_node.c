#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau noeud au dÃ©but d'une liste chaÃÃ
 * @head: Pointeur vers le pointeur de la tÃªte de la list
 * @str: Chai®ne de carace¨e a dupliquer et a inse©rer dans lenoeud
 *
 * Return: Adresse du nouveau noeud ou NULL en cas d'Ã©che
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
