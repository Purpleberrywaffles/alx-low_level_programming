#include <stdio.h>

/**
 * main - using the for and putchar command
 *
 * Description: Using the main function
 * This program prints the alphabet in lowercase
 * Return: 0
 */
int main (void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++);
	putchar(c);

	putchar('\n');
	return (0);
}
