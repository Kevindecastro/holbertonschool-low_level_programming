#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freed a structure
 * @d: dog structure
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
