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
char ch;
	
for (ch = 'a' ; ch <= 'z' ; ch ++);
{
	putchar(ch);
}
putchar('\n');
return (0);
}
