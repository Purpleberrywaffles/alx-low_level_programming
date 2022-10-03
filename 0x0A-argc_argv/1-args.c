#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed into it
 * @argv[] - Prints the strings of an argument
 * @i - Value of arguments
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n", argc);

	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}

