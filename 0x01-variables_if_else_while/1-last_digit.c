#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is greater than 5, is 0 or less than 6 and not 0
 *
 * Description: using the main function
 * This program prints if the number is greater than 5, is 0 or less than 6 and not 0
 * returns 0
 */
int main (void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
