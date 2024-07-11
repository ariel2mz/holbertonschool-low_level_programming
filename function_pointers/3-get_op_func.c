#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/* more headers go here */

/**
 * get_op_func - Calculate the length of a string
 *
 * @s: aaaaa
 * Description: Returns the length of a string
 * Return: Length of the string
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
while (i < 5)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
