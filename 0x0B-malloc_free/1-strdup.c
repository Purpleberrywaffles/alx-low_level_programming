#include "main.h"

/**
 * _strdup - returns a pointer to duplicated string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dupstr;

	dupstr = malloc(sizeof(char));

	if (str != NULL)
		dupstr = strdup(str);

	else
		return (NULL);
	return (dupstr);
	free(dupstr);
}
