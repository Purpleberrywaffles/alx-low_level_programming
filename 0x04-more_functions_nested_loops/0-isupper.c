#include "main.h"
#include <stdio.h>

/**
 * Description: function that checks for uppercase characters
 *
 * Return: 1 if 'c' is uppercase otherwise always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	return(1);
	return(0);
}
