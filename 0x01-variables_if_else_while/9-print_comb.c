#include <stdio.h>

/**
 * main - using for, if and putchar command
 *
 * Description: using the main function
 * This prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
		}
	}
	
	putchar('\n');
	return(0);
}
