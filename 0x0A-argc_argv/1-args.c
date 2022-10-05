#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc - Counts the number of arguments
 * @argv - Shows arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv[0];
	printf("argc = %d\n", argc);

	return (0);
}

