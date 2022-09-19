#include "main.h"
#include <stdio.h>

/**
 * main - function that takes a pointer to an int and updates the value it points to 98
 * @n - the parameter for int
 *
 * Return: Always 0
 */
void reset_to_98(int *n);
{
	int n;
	int *p;

	n = 98;
	p = &n;

	{
		_putchar("n=%d\n", n);
	}	
}
