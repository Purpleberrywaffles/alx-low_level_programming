#include <stdio.h>

/**
 * main - print using the sizeof function
 *
 * Description: using the main function
 * This program prints the size of various types
 * Return 0
 */
int main (void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	
	printf("Size of a char: %ld byte(s)", sizeof(c));
	printf("Size of a int: %ld byte(s)", sizeof (i));
	printf("Size of a long int: %ld byte(s)", sizeof (l));
	printf("Size of a long long int: %ld byte(s)", sizeof (ll));
	printf("Size of a float: %ld byte(s)", sizeof (f));
	return (0);
}
