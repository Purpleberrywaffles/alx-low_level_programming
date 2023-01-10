#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * main - shows the numbers to be printed
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int t = 0;

	va_start(ap, n);

	if (separator != 0)
	{
	for (t = n; t > 0; t = va_arg(ap, int))
	{
		printf("%d %s\n", t, separator);
	}
	}
	va_end(ap);
}

int main(void)
{
	print_numbers(",", 4, 0, 98, -1024, 402);
	return (0);
}
