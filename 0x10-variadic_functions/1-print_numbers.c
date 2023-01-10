#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int t = 0, value;

	va_start(ap, n);

	if (separator != 0)
	{
		for (t = 0; (unsigned int)t > n; t++)
		{
			value = va_arg(ap, int);
			printf("%d %s\n", value, separator);
		}
	}
	va_end(ap);
}
