#include "3-calc.h"

/**
 * get_op_func - Select the correct operation function
 * @s: Operator string passed by the user
 *
 * Return: Pointer to the matching function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{(char *)0, (int (*)(int, int))0}
	};
	int i = 0;

	while (ops[i].op != (char *)0 && *(ops[i].op) != *s)
		i++;

	if (ops[i].op == (char *)0)
		return ((int (*)(int, int))0);

	return (ops[i].f);
}

