#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function that takes char
 *
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	while (*f == NULL)
		break;

	(*f) (name);
}
