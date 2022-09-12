#include <stdio.h>

/**
 * main - Prints using for and putchar commands
 *
 * Description: Using the main function
 * This prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char b;

	for (b='0'; b <= '9'; b++)
        {
		putchar(b);
	}
	
	putchar('\n');
	return(0);
}
