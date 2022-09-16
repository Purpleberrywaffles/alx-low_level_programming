#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase characters
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
