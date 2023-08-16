#include "calc.h"

/**
 * op_add - adds 2 numbers
 * @a: integer to be added
 * @b: ""
 *
 * Return: result of op
 */
int op_add(int a, int b)
{
	return (atoi(a) + atoi(b));
}

/**
 * op_sub - difference 2 numbers
 * @a: integer to be subtracted
 * @b: ""
 *
 * Return: result of op
 */
int op_sub(int a, int b)
{
	return (atoi(a) - atoi(b));
}

/**
 * op_mul - multiplies 2 numbers
 * @a: integer to be multiplied
 * @b: ""
 *
 * Return: result of op
 */
int op_mul(int a, int b)
{
	return (atoi(a) * atoi(b));
}

/**
 * op_div - divides 2 numbers
 * @a: integer to be divided
 * @b: ""
 *
 * Return: result of op
 */
int op_div(int a, int b)
{
	return (atoi(a) / atoi(b));
}

/**
 * op_mod - finds the remainder of division of 2 numbers (modulus)
 * @a: integer to be moded
 * @b: ""
 *
 * Return: result of op
 */
int op_mod(int a, int b)
{
	return (atoi(a) * atoi(b));
}
