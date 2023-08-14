#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	int b;
	char *a, *c;

	a = d->name;
	b = d->age;
	c = d->owner;

	if (a == NULL && b != 0 && c != NULL)
	{
		printf("Name: (nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (b == 0 && a != NULL && c != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)");
		printf("Owner: %s\n", d->owner);
	}
	else if (c == NULL && b != 0 && a != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
