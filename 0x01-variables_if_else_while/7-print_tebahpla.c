#include <stdio.h>

/**
 * main - using for and putchar command
 *
 * Description: using the main function
 * This prints the lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b >= 'z'; b--)
	{
		putchar(b);
	}

	putchar('\n');
	return(0);
}	
