#include "variadic_functions.h"

/**
 * give_char - prints a char
 * @print: argument pointer
 *
 * Return: NULL
 */
void give_char(va_list print)
{
	char c;
	c = (char)va_arg(print, int);
	printf("%c", c);
}

/**
 * give_int - prints an integer
 * @print: argument pointer
 *
 * Return: NULL
 */
void give_int(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * give_float - prints a float
 * @print: argument pointer
 *
 * Return: Null
 */
void give_float(va_list print)
{
	printf("%f", (float)va_arg(print, double));
}

/**
 * give_string - prints a string
 * @print: argument pointer
 *
 * Return: NULL
 */
void give_string(va_list print)
{
	char *s;

	s = va_arg(print, char *);
	if (!s)
		printf("(nil)");

	else
		printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	char *space = "";
	size_t t = 0;
	const char *ptr_format;

	va_list print;

	va_start(print, format);

	print_char func[] = {
		give_char,
		give_int,
		give_float,
		give_string
	};
	
	ptr_format = format;
	while (*ptr_format)
	{
		for (; t < sizeof(func) / sizeof(func[0]); t++)
		{
			if (*ptr_format == func[t][0])
			{
				func[t](print);
				break;
			}
		}
		ptr_format++;
	}

	printf("\n");
	va_end(print);
}
