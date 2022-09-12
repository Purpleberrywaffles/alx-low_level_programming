#include <stdio.h>

/**
 * main - Print using for and putchar
 *
 * Description: using the main function
 * This prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return(0);
}
