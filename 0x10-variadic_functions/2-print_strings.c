#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string between strings
 * @n: no of integers passed
 *
 * Return: strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t = 0;
	const char *str;
	int null = 0;

	va_list ap;

	va_start(ap, n);

	for (; t < n; t++)
	{
		str = va_arg(ap, const char *);

		if (str == NULL)
		{
			null = 1;
			continue;
		}
		if (t == n - 1 || separator == NULL)
			printf("%s", str);

		else
			printf("%s%s", str, separator);
	}

	if (null == 1)
		printf("\n");
	printf("\n");
	va_end(ap);
}
