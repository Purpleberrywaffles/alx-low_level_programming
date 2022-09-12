#include <stdio.h>

/**
 * main - using the putchar command
 *
 * Description: using the main command
 * This program prints alphabets in lowercase
 * Return: 0
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return(0);
}
