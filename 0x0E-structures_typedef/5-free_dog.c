#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to struct dog_t
 *
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
