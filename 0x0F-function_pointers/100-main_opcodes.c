#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @mwanzo: a char
 * @bytes: no of bytes to be entered
 *
 * Return: NULL
 */
void print_opcodes(unsigned char *mwanzo, int bytes)
{
	int t = 0;

	for (; t < bytes; t++)
		printf("%02x", mwanzo[t]);

	printf("\n");
}

/**
 * main - prints address of main
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes;
	unsigned char *ptrmain;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	ptrmain = (unsigned char *)main;
	print_opcodes(ptrmain, bytes);
	return (0);
}
