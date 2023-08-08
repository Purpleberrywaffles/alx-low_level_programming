#include "main.h"

/**
 * create_array - creates an array of chars, initialises with a specific char
 * @size: size of array
 * @c: char to be initialised
 *
 * Return: pointer to array else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int *arr;
	unsigned int t;

	arr = (unsigned int *)malloc(size * sizeof(unsigned int));

	if (arr != NULL)
	{
		for (t = 0; t < size; t++)
		{
			arr[t] = c;
			putchar(arr[t]);
		}
		free(arr);
	}
	else
		return (0);
	return (arr);
}
