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
	int x = 0;

	if (argc > 0)
	{
		while (x < argc)
		{
			printf("%s\n", argv[x]);
			x++;
		}
	}
	return (0);
}
