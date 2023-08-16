#include "function_pointers.h"

/**
 * compare - compares values
 * @num: number to be compared
 *
 * Return: num
 */
int compare(int *num)
{
	return (num);
}

/**
 * int_index - index of searched element
 * @array: an array
 * @size: no of elements in array
 * @cmp: pointer to a function taking int as parameter
 *
 * Return: index of element to be searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);

	else
	{
		for (t = 0; t < size; t++)
		{
			cmp = &compare;
			if (cmp(array[t]) == 0)
				return (t);
			else
				return (-1);
		}
	}
	return (0);
}
