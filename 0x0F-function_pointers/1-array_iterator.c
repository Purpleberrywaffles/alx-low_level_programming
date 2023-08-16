#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each array element
 * @array: an array
 * @size: size of the array
 * @action: pointer to a function taking int as parameter
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	for (t = 0; t < size; t++)
	{
		if (array == NULL)
			break;

		(*action) (array[t]);
	}
}
