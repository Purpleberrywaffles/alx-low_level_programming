#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated until a limit
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
