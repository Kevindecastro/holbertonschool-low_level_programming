#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
* list_len - Function for show the list
* @h: pointers contains string
*
* Return: Number Elements
*/

size_t list_len(const list_t *h)
{
    size_t count = 0; // Initialisation du compteur

    while (h != NULL) // Tant qu'on n'est pas à la fin de la liste
    {
        count++;      // Incrémente le compteur pour chaque nœud
        h = h->next;  // Passe au nœud suivant
    }

    return count; // Retourne la longueur de la liste
}
