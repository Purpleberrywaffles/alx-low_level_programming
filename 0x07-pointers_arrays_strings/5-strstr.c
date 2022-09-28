#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * Return: If the substring is located - a pointer to the beginning of the located substring
 * 	If the substring is not located - NUL
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);

				a++;
			} while (haystack[a] == needle[a];
		}

		haystack++;
	}
	return ('\0');
