#include "calc.h"
/**
 * get_op - selects the correct function to perform the operation asked
 * by the user
 * @s: a char variable containing the operator
 * @a: 1st int
 * @b: 2nd int
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int a, int b)
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

	while (ops.op[i] != NULL)
		*s == ops.op[i] ? return (ops.f) : i++;
	return (NULL);
}
