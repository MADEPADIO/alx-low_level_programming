#include "3-calc.h"

/**
 * get_op_func - selects the corrct function to perform asked by the user
 *
 * @s: char operator
 *
 * Return: pointer to the func that correspond to selection
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

	int i = 0;

	while (i < 10)

	{

		if (s[0] == ops->op[i])
			break;

		i++;
	}

	return (ops[i / 2].f);
}


