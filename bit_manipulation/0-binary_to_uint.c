#include "main.h"

/**
 * binary_to_uint - Convertit un nombre binaire en un entier non signé
 * @b: Une chaîne de caractères composée uniquement de '0' '1'
 *
 * Return: Le nombre converti,
 * ou 0 si la chaîne contient un caractère invad
 * ou si b est NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/* Vérifier si la cha�e est NULL */
	if (b == NULL)
		return (0);
	/* Parcourir la cha�ne */
	while (*b)
	{
		/* Si le caractère actuel n'est ni '0' ni '1', retourne 0 */
		if (*b != '0' && *b != '1')
			return (0);
		/* Décaler le résultat vers la gauche et ajouter la valeur du bit auel */
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
