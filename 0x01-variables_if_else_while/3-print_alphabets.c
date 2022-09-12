#include <stdio.h>

/**
 * main - using the putchar command
 *
 * Description: Using the main function
 * This program prints alphabets in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return(0);
}
