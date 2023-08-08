#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string else NULL
 */
char *argstostr(int ac, char **av)
{
	int length = 0, t = 0, current = 0;
	char *final;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; t < ac; t++)
		length += strlen(av[t]) + 1;

	final = malloc(length + 1);
	if (final == NULL)
		return (NULL);

	for (; t < ac; t++)
	{
		strcpy(final + current, av[t]);
		current += strlen(av[t]);
		final[current] = '\n';
		current++;
	}
	final[current] = '\0';

	return (final);
	free(final);
}
