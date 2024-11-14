#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new file for dog with name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	int length_name = 0, length_owner = 0;

	if (name != NULL && owner != NULL)
	{
		length_name = strlen(name) + 1;
		length_owner = strlen(owner) + 1;
		copy_dog = malloc(sizeof(dog_t));

		if (copy_dog == NULL)
			return (NULL);

		copy_dog->name = malloc(sizeof(char) * length_name);

			if (copy_dog->name == NULL)
			{
				free(copy_dog);
				return (NULL);
			}

		copy_dog->owner = malloc(sizeof(char) * length_owner);

		if (copy_dog->owner == NULL)
		{
			free(copy_dog->name);
			free(copy_dog);
			return (NULL);
		}

		copy_dog->name = strcpy(copy_dog->name, name);
		copy_dog->age = age;
		copy_dog->owner = strcpy(copy_dog->owner, owner);
	}

	return (copy_dog);
}
