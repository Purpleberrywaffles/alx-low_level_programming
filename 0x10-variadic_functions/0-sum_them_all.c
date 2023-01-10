#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n - number of integer arguments
 * @t - integer type
 *
 * Return: sum if n is not equal to 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int t = 0, sum = 0;

	va_start(ap, n);

	for (t = 0; (unsigned int)t < n; t++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	if (n != 0)
	{
		return (sum);
	}
	else
	{
		return (0);
	}
}
