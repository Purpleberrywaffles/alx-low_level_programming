#include "main.h"

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	a = (char *) malloc(size * sizeof(char));

	if (a == 0)
	{
		return (NULL);
	}
	_strcpy(a, str);
	return (dst);
