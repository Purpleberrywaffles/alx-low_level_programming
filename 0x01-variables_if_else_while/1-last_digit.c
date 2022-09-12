#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is greater than 5, is 0 or less than 6 and not 0
 *
 * Description: using the main function
 * This program prints if the number is greater than 5, is 0 or less than 6 and not 0
 * return 0
 */
int main (void)
{
	int n;
	char last [] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%s %d is %d and is ",last, n, n %10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}