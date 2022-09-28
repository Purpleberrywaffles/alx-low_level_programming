#include "main.h"

/**
 * helperfunction - returns 0 or 1
 * @num: number being checked
 * @i: possible factor of the number
 *
 * Return: 0 if not prime, 1 if prime
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (i);
	}
}
