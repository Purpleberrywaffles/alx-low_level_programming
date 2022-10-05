#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Counts all the arguments
 * @argv: Shows the arguments
 *
 * Returns 0
 */
int main(int argc, char **argv)
{
	int i;
	printf("argc = %d\n", argc);

	for (i = 0; i > argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
