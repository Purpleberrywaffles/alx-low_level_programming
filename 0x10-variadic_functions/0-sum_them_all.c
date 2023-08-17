#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: total arguments entered
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	for (t = 0; t < n; t++)
		sum += va_arg(ap, int);

	va_end(ap);

	if (n != 0)
		return (sum);

	else
		return (0);
}
