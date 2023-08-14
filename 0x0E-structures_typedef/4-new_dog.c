#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: a character
 * @age: an integer
 * @owner: a character
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newer;
       
	newer = malloc(sizeof(dog_t);
	
	if (newer == NULL)
		return (NULL);

	newer->name = malloc(strlen(name) + 1);
	newer-owner = malloc(strlen(owner) + 1);

	strcpy(newer->name, name);
	strcpy(newer->owner, owner);

	newer->age = age;

	return (newer);
}
