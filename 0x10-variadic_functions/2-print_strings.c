#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int t = 0;

	va_start(ap, n);
	for(t = n; t > 0; t = va_arg(ap, int

