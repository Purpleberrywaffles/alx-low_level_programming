#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function to check 0-9
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is digit otherwise, always o (Success)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	return(1);
	return(0);
}
