#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to struct dog
 * @name: a character
 * @age: an integer
 * @owner: a character
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}