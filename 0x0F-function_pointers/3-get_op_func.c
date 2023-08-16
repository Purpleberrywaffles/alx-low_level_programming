#include "function_pointers.h"

/**
 * get_op_func - selects correct function for operation
 * @get_op_func: also a function pointer
 * @s: char parameter for function pointer
 *
 * Return: correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	(ops[i] == NULL) ? return (NULL) : return (ops[i]);
}
