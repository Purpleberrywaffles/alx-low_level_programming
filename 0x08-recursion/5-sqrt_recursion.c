#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find the square root of
 * @root: The root to be tested
 *
 * Return: If the number has a natural square root - the square root
 *         If the number does not have a natuarl square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
}